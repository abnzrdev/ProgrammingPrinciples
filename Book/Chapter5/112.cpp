//
// Created by Abenezer on 5/6/2025.
// Guessing game (Bulls and Cows)
//

#include "std_lib_facilities.h"

int bul_cow(int num, string inp){

	// Generate the random number and store it in the vector
	vector<int> nums;
	seed_randint(num);
	for(int i = 0; i < 4; i++){
		int num = 0;
		num = randint(9);
		nums.push_back(num); // Pushing back random numbers to the vector
	}

	// For giving up on the game
	if(inp == "quit"){
		cout << "GAME OVER🏁"<< "The number was : ";
		for(int num : nums){
			cout << num;
		}
	}

	// Changing the input string into vectors of integer
	vector<int> inp_vecs;
	for(char c : inp){
		// Validation for the digit entry
		if(!isdigit(c)){
			throw runtime_error("Invalid input, Please Enter only Digits");
		}
		// For giving up on the game
		inp_vecs.push_back(c - '0');   // the characters as string has ascii code so '1' - '0' subtract the ascii code of the the 1 from 0 which has a difference of 1
	}



	//Checking for the bull and cow; ==> bull if the player get the exact position
	//Cow == if the player got the number but not in the exact position
	int bull = 0;
	int cow = 0;

	vector<int> taken(4, 0);
	vector<int> taken_inp(4,0);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(nums[i] == inp_vecs[j] && i == j){
				bull++;
				taken[i] = 1;
				taken_inp[i] = 1;
			}
		}
	}

	for(int i = 0; i < 4; i++){
		if(!taken_inp[i]){
			for(int j = 0; j < 4; j++){
				if(nums[i] == inp_vecs[j] && i != j && taken[i] == 0){
					cow++;
					taken[i] = 1;
					taken_inp[i] = 1;
					break;
				}
			}
		}
	}

	cout << cow << " cow "  << bull << " bull " << endl;
	return bull;
}

int main(){

	// Generating the number
	int num_inp;
	cout << "Write any number " << endl;
	cin >> num_inp;

	bool game_cont = true;  // game logic

	while(game_cont){
		try{

			// taking the user guess
			string input;
			cin >> input;

			// Validate the input length
			if(input.size() != 4){
				cout << "Invalid input. Please enter exactly 4 digits." << endl;
				return 1;
			}

			int bulls = bul_cow(num_inp,input);
			if(bulls == 4){
				cout << "Congratulations! You guessed the number right" << endl;
				game_cont = false;
			}
		}
		catch(exception &e){
			cout << e.what() << endl;
		}
		catch(...){
			cout << "Unknown Error occured!" << endl;
		}
	}

	return 0;
}
