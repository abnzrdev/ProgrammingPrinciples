//
// Created by Abenezer on 4/1/2025.
// Drill for chapter 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  // declaring variables
  double num1 = 0;
  double num2 = 0;
  string unit1 = "";
  string unit2 = "";
  // Conversion factors
  double m_to_in = 39.37;
  int m_to_cm = 100;
  double m_to_ft = 3.28;
  // For creating sum, smallest and largest value and counter as well
  double sum = 0;
  double ind_sum = 0;
  double smallest = 0;
  double largest = 0;
  int cntr = 0;
  // For making those files to be stored in ina vector
  vector<double> store;

  //Asking the user to input
  cout << "Enter your two measurments separated by space" << endl;

  while(cin >> num1 >> num2){
    // Taking inputs and taking the unit inputs
    cout << "What is your unit for the first number : ";
    cin >> unit1;
    cout << "What is your unit for the second number : ";
    cin >> unit2;
    cntr += 2;                     // Counting the number of input

	// Checking the largest and the smallest input


    // checking if the unit is defined
    if((unit1 == "cm" || unit1 == "m" || unit1 == "ft" || unit1 == "in")  && (unit2 == "cm"
                                      || unit2 == "m" || unit2 == "ft" || unit2 == "in")){

      // conversion of unit1
      if(unit1 == "cm"){
        num1 /= m_to_cm;
      }
      else if(unit1 == "in"){
        num1 /= m_to_in;
      }
      else if(unit2 == "ft"){
        num1 /= m_to_ft;
      }
      else{
        num1 = num1;
      }

      // conversion of unit2
      if(unit2 == "cm"){
        num2 /= m_to_cm;
      }
      else if(unit2 == "in"){
        num2 /= m_to_in;
      }
      else if(unit2 == "ft"){
        num2 /= m_to_ft;
      }
      else{
        num2 = num2;
      }
      store.push_back(num1);          // including num1 in list(the vector named store)
      store.push_back(num2);          // including num2 in the list(the vector named store)

      ind_sum = num1 + num2;    // computing the sum in every iteration
   	  sum += ind_sum;           // Saving the sum of all inputs
    }
    else{
      cout << "Illegal presentation of units" << endl;
      return 0;
    }
  }

  cout << "The sum of those inputs is : "<< sum << "m." << endl
       << "You have made " << cntr << " inputs." << endl;

  cout << "The list of inputs are " << endl;
  for(int i = 0; i < store.size(); i++){
    cout << store[i] << endl;
  }

  //Sort the input
  sort(store.begin(),store.end());

  //Computing the mode of the inputs
  int mod = 1;
  for(int i = 1; i < store.size() + 1; i++){
    if(store[i - 1] == store[i]){
      mod++;
    }
    else{
      cout << store[i - 1] << " occured " << mod << " times!!" << endl;
      mod = 1;
    }
  }

  // Giving the largest and the smallest input
  cout << "The largest input is : " << store[store.size() - 1] << endl;
  cout << "The smalles input is : " << store[0] << endl;

  return 0;
}
