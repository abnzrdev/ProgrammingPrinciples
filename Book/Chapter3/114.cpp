//
// Created by Abenezer on 4/7/2025.
// Rock Paper Scissor game
// Switch statement
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
  // Define the computer choices;
  vector<string> choices = {"Rock" , "Paper", "Scissor"};
  string comp = "";
  int no_games = 1;
  string opt = "";


  for(int i = 0; i < 4; i++){
    if(i > 2){
      i = 0;    // making the game to continue ....
    }
    comp = choices[i];

    cout << "Rock/Paper/Scissor : ";
    cin >> opt;
    int opt_to_int = int(opt[0]);   // Taking the input's first letter and changing to integer(to make it to work on the switch statement)

    switch (opt_to_int){
      case 82: // Rock
        if(comp == "Paper"){
          cout << "You Lose!" << endl;
        }
        else if(comp == "Rock"){
          cout << "Tie🤝" << endl;
        }
        else{
          cout << "You Win!!!" << endl;
        }
        break;

      case 80: // Paper
        if(comp == "Scissor"){
          cout << "You Lose!" << endl;
        }
        else if(comp == "Paper"){
          cout << "Tie🤝" << endl;
        }
        else{
          cout << "You Win!!!" << endl;
        }
        break;

      case 83: // Scissor
        if(comp == "Rock"){
          cout << "You Lose!" << endl;
        }
        else if(comp == "Scissor"){
          cout << "Tie🤝" << endl;
        }
        else{
          cout << "You Win!!!" << endl;
        }
        break;

      default :
        cout << "Please give valid input!" << endl;
    }
  }
}
