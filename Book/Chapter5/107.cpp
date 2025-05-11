//
// Created by Abenezer on 5/3/2025.
// Finding the error of the temprature converter and correcting the code
//

#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
    double k = c + 273.15; // Changed from int to double to make
	if(c < -273.15){
		cout << "Temprature is below absolute Zero!\n";
		return 1;                 // 1 shows there is an error in the code ==> this is handled in the calee function
	}
    return k;  // changed from return int to return k
}

double ktoc(double k) // Converts from Celsius to Kelvin
{
	double c = k - 273.15;
	if(k < 0){
		cout << "Temprature is below absoulte Zero!\n";
		return 1;
	}
	return c;
}

int main()
{
	// declare input variable
	double c = 0;
	double k = 0;

	// Check What the user want to convert
	cout << "What Value do you have (k/c) : ";
	char inp = ' ';
	cin >> inp;

	// Deciding what to do based on the input
	if(inp == 'k'){
		cin >> k;
		double c = ktoc(k);
		cout << c << '\n';
	}
	else if(inp == 'c'){
		cin >> c; // retrieve temperature to input variable  // give the correct variable name
    	double k = ctok(c); // convert temperature
    	cout << k << '\n' ; // print out temperature
	}
	else{
		cout << "Bad input" << endl;
	}

}