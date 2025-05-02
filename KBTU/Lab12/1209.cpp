//
// Created by Abenezer on 4/23/2025.
/*
Finding the unique password
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

bool is_digit(char ch){
	return ch >= '0' && ch <= '9';
}
bool is_small(char ch){
	return ch >= 'a' && ch <= 'z';
}
bool is_capital(char ch){
	return ch >= 'A' && ch <= 'Z';
}

// Checking if it contains all the passwords
bool is_strong(std::string &pswd){
	bool has_digit = std::any_of(pswd.begin(), pswd.end(), is_digit);
	bool has_small = std::any_of(pswd.begin(), pswd.end(), is_small);
	bool has_capital = std::any_of(pswd.begin(), pswd.end(), is_capital);
	
	return has_digit && has_small && has_capital;
}

int main(){
	// Taking the size
	int size = 0;
	std::cin >> size;
	std::set<std::string> pswds;

	// Taking the password inputs
	for(int i = 0; i < size; i++){
		std::string pswd = "";
		std::cin >> pswd;
		if(is_strong(pswd)){
			pswds.insert(pswd);
		}
	}
	
	// Giving the output
	std::cout << pswds.size() << std::endl;
	for(auto &pswd : pswds){
		std::cout << pswd << std::endl;
	}

	return 0;
}
