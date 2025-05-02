//
// Created by Abenezer on 4/13/2025.
// GPA Calculator
//
#include <iostream>
#include <vector>

int main(){
  // Declaration of varaibles and taking inputs
  int num_of_sub;
  std::cin >> num_of_sub;
  std::vector<int> subs;

  // Taking inputs for the vector
  for(int i = 0; i < num_of_sub * 4; i++){
    int num;
    std::cin >> num;
    subs.push_back(num);
  }

  // Calculating the first attestation
  double first_att = 0;
  for(int i = 0; i < num_of_sub * 4; i += 4){
      first_att += subs[i] * 0.3;
  }
  first_att = first_att * 0.3;

  // Calculating the second attestation
  double second_att = 0;
  for(int i = 1; i < num_of_sub * 4; i += 4){
    second_att += subs[i];
  }
  second_att = second_att * 0.3;

  //Calculating the final exam
  double final = 0;
  for(int i = 2; i < num_of_sub * 4; i += 4){
    final += subs[i];
  }
  final = final * 0.4;

  //Calculating the credits
  double credits = 0.0;
  for(int i = 3; i < num_of_sub * 4; i += 4){
    credits += subs[i];
  }

  // Calculating the gpa
  double gpa = (first_att + second_att + final) / credits;

  std::cout << final << " " << credits << " " << second_att << " " << first_att << std::endl;
  std::cout << gpa;

  return 0;
}