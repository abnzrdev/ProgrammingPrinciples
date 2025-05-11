//
// Created by Abenezer on 5/4/2025.
// Quadratic Calculator with error handler
// The error will be handled through exception

#include "std_lib_facilities.h"

void quad_calc(double a, double b, double c){ // Make this function void and give out(cout result only not returning a value cause )

	// Pre-Condition a,b,c but a != 0 and the discrminant > 0
	if(a == 0) throw runtime_error("The value of \'a\' can't be zero");

    //Writing the checker for the discrminant
    double chckr = (b * b) - 4 * a * c;
    if(chckr < 0) throw runtime_error("b2-4ac is less than zero");

    // Calculating the value of x
    double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "The Value of the first root is : " << r1 << endl << "The Value of the second root is : " << r2 << endl;
}

int main(){
	try{
		string a_str, b_str, c_str;
    	double a, b, c;
    	cin >> a_str >> b_str >> c_str;

		// Check if input contains only digits, decimal point, or minus sign
        for(char ch : a_str + b_str + c_str) {
            if(!isdigit(ch) && ch != '.' && ch != '-') {
                cout << "Please enter only numbers!" << endl;
                return 1;
            }
        }

        // Convert strings to doubles
        a = stod(a_str);
        b = stod(b_str);
        c = stod(c_str);

        quad_calc(a, b, c);
    }
    catch(exception& e) {
        cout << e.what() << endl;
    }
    catch(...) {
        cout << "Unexpected Error!" << endl;
    }

    return 0;
}