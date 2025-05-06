//
// Created by Abenezer on 5/5/2025.
// Finding the largest number that can fit in int of fibonacci sequence
//

#include "std_lib_facilities.h"

void fib_seq(int size){
	// Declaring the first two variables
	int a = 0;
	int b = 1;
	int sum = 0;

	cout << a << endl << b << endl;
	//fibonacci logic
	for(int i = 0; i < size - 1; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		cout << sum << endl;
	}
}

int main(){

	// Taking the size
	int size = 0;
	cin >> size;

	//input validation
	if(size <= 0){
		cout << "There is no fibonacci sequence can be done for this size.Please input positive integer" << endl;
		return 1;
	}

	fib_seq(size);
}