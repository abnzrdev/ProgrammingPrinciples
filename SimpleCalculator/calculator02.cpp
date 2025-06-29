// so my next task is to add the ! operator which can bind tighter that / and *
// so we have to use the include the character have to be read like operator
// so we have to include other part of the grammar
// Created by Abenezer on 5/28/2025.
//
#include "../book/chapter5/std_lib_facilities.h"  // Calling header files for the program

//------------------------------------------------------------------------------

class Token {
public:
    char kind;
    double value;

    Token(char ch) : kind(ch), value(0) { }
    Token(char ch, double val) : kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
    Token_stream();
    Token get();
    void putback(Token t);

private:
    bool full;
    Token buffer;
};

//------------------------------------------------------------------------------

Token_stream::Token_stream()
    : full(false), buffer(0) { }  // buffer initialized with a dummy token

void Token_stream::putback(Token t) {
    if (full) error("putback() into a full buffer");
    buffer = t;
    full = true;
}

Token Token_stream::get() {
    if (full) {
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;

    switch (ch) {
    case '=': case 'x': case '(': case ')': case '{': case '!':
    case '+': case '-': case '*': case '/': case  '}':
        return Token(ch);
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9': {
        cin.putback(ch);
        double val;
        cin >> val;
        return Token('8', val);  // '8' represents a number
    }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;  // global Token_stream

// Forward declarations
double expression();
double term();
double primary();
double special(); // For handling factorial

//------------------------------------------------------------------------------

double factorial() {
    double left = primary();
    Token t = ts.get();
    while (t.kind == '!') {
        if (left < 0 || left != int(left))
            error("Factorial only defined for non-negative integers");
        int result = 1;
        for (int i = 1; i <= int(left); ++i)
            result *= i;
        left = result;
        t = ts.get();
    }
    ts.putback(t);
    return left;
}

double primary() {
    Token t = ts.get();
    switch (t.kind) {
    case '{': {
        double d = expression();
        t = ts.get();
        if (t.kind != '}') error("'}' expected");
        return d;
    }
    case '(': {
        double d = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected");
        return d;
    }
    case '8':
        return t.value;
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

double term() {
    double left = factorial();
    Token t = ts.get();

    while (true) {
        switch (t.kind) {
        case '*':
            left *= factorial();
            t = ts.get();
            break;
        case '/': {
            double d = factorial();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);
            return left;
        }
    }
}

//------------------------------------------------------------------------------

double expression() {
    double left = term();
    Token t = ts.get();

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;
        }
    }
}

//------------------------------------------------------------------------------

int main() {
    try {
        cout << "Welcome to our simple calculator.\n";
        cout << "Please enter expressions using floating-point numbers.\n";
        cout << "Operators: + - * / and parentheses (). Type '=' to print and 'x' to quit.\n";

        while (cin) {
            cout << "> ";
            Token t = ts.get();
            while (t.kind == '=') t = ts.get();  // Skip repeated print commands
            if (t.kind == 'x') break;
            ts.putback(t);
            double val = expression();
            cout << "The Value is : " << val << '\n';
        }
        return 0;
    } catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    } catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}
