//
// Created by Abenezer on 2/13/2025.
// Simple programs ( Letter using some parts )
// Using the string library
#include <iostream>
#include <string>

int main(){
  std::string first_name, friend_name, age_phrase;
  int age;

  std::cout << "Enter the name of the person you want to write to : ";
  std::cin >> first_name;
  std::cout << "Enter your friend name : ";
  std::cin >> friend_name;
  std::cout << "Enter the age : ";
  std::cin >> age;

  if (age == 0 || age >= 110){
   age_phrase = "You are Kidding";
  }
  else if (age < 12){
    age_phrase = "Next year you will be " + std::to_string(age + 1);
  }
  else if (age == 17){
    age_phrase = "Next year you will be able to vote";
  }
  std::cout << "    Dear " << first_name << "\n"
            << "  How are you? I am fine. I miss you."
            << "  Have you seen " << friend_name << " lately."
            << "  I hear you just had a birthday and you are " << age << " years old.\n"
            << age_phrase
            << "\nYours sincerly\n\n";
  return 0;
}

