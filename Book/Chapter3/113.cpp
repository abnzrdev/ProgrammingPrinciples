//
// Created by Abenezer on 4/7/2025.
// Giving the inventor of chess a rice
// Old Story - The inventor of chess wants to get 64(number of chess squares)
// doubling looped grains of rice(but there was no that amount of rice in the empire)
//

#include <iostream>
using namespace std;


int main(){
  // Declaring Variables
  int no_square = 0;
  int input = 0;

  //Taking input(Number of grain of salt)
  cout << "How many grains of rice do you want to give the inventor : ";
  cin >> input;

  //
  for(int i = 1; i <= input; i *= 2){
    no_square++;
  }

  // Giving the output
  cout << "You need " << no_square << "squares." << endl;

  // Declaring variables
  int num_of_squares = 64;
  long long int num_of_grains = 0;
  for(int i = 0; i < 64; i++){
    num_of_grains *= 2;
  }

  cout << "The actual number of grains is : " << num_of_grains;

  return 0;
}
