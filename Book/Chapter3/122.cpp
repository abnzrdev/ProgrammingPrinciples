//
// Created by Abenezer on 4/11/2025.
// Name and score pair


#include <iostream>
#include <vector>

int main(){
  // Declaration of variables
  std::vector<std::string> names;
  std::vector<int> scores;

  // Taking the input using the loop
  std::string name = "";
  int score = 1;
  while((name != "NoName") || (score != 0)){
    // Taking inputs from the user
    std::cin >> name >> score;
    names.push_back(name);
    scores.push_back(score);

    //Checking if the name is repeated
    int size = names.size();
    for(int i = 1; i < size; i++){
      if(name == names[i - 1]){
        std::cout << "You Entered Name twice!!" << std::endl;
        return 0;
      }
    }
  }

  // Giving out values in different lines
  for(int i = 0; i < names.size(); i++){
    if((names[i] != "NoName") || (scores[i] != 0)){
      std::cout << names[i] << " " << scores[i] << std::endl;
    }
  }

  // Getting the scores
  while(std::cin >> name && name != "stop"){
    for(int i = 0; i < names.size(); i++){
      if(name == names[i]){
        std::cout << "The score of is : " << scores[i] << std::endl;
      }
    }
  }

  // Getting the name with the same scores
  while(std::cin >> score){
    for(int i = 0; i < scores.size(); i++){
      if(score == scores[i]){
        std::cout << "The names are : " << names[i] << std::endl;
      }
    }
  }

  return 0;
}