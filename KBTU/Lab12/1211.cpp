//
// Created by Abenezer on 4/23/2025.
/*
String Counter
*/

#include <iostream>
#include <map>
#include <string>

int main(){
	// Declaring Variables and Taking inputs
	int size = 0;
	std::cin >> size;
	
	// Taking the string and put it in map
	std::map<std::string, int> inps;
	for(int i = 1; i <= size; i++){
		std::string inp = "";
		std::cin >> inp;
		if(inps.find(inp) == inps.end()){
			inps[inp] = i;
		}
	}

	// Giving out the output
	for(const auto &inp : inps){
		std::cout << inp.first << ' ' << inp.second << std::endl;
	}

	return 0;
}
