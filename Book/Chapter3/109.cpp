//
// Created by Abenezer on 4/5/2025.
// Number guessing game(The user will have a number in mind)
// The computer needs to know the number using just 7 cases(asking the user)
#include <iostream>
#include <vector>
using namespace std;

int main(){
  // Filling the vector with integer values
  vector<int> vals;
  for(int i = 0; i < 100; i++){
    vals.push_back(i + 1);
  }

  //Shortlisting questions
  cout << "Is your number [51-100], Write Yes/No : ";
  string rspns = "";
  cin >> rspns;

  if(rspns == "Yes"){
    cout << "Is your number [76-100] : ";
    cin >> rspns;
    if(rspns == "Yes"){
      cout << "Is your number [88-100] : ";
      cin >> rspns;
      if(rspns == "Yes"){
        cout << "Is your number [94-100] : ";
        cin >> rspns;
        if(rspns == "Yes"){
          cout << "Is your number [97-100] : ";
          cin >> rspns;
          if(rspns == "Yes"){
            cout << "Is your number [99-100] : ";
            cin >> rspns;
            if(rspns == "Yes"){
              cout << "Is your number greater than 99 : ";
              cin >> rspns;
              if(rspns == "Yes"){
                cout << "Your number is 100." << endl;
              }
              else{
                cout << "Your number is 99." << endl;
              }
            }
            else{
              cout << "Is your number [97-98] : ";
              cin >> rspns;
              if(rspns == "Yes"){
                cout << "Is your number greater than 97 : ";
                cin >> rspns;
                if(rspns == "Yes"){
                  cout << "Your number is 98" << endl;
                }
                else{
                  cout << "Your number is 97" << endl;
                }
              }
            }
          }
        }
      }
    }
  }
}
