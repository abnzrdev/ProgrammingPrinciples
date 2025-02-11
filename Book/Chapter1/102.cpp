//
// Created by Abenezer on 2/9/2025.
//
#include <iostream>
int main(){
  	char name[64];
	double age;
    std::cin >> name >> age;
    double age_in_months = age * 12;
    std::cout << name << " (age " << age_in_months << ")";
}