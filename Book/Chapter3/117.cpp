//
// Created by Abenezer on 4/10/2025.
// Finding Prime numbers using the sieve of erathosenes method
//

#include <iostream>
#include <vector>

int main(){

  int num = 100;
  std::cout << "Enter your number : ";
  std::cin >> num;
  std::vector<int> prime; // a vector to store the primes
  bool is_prime[num]; // giving the boolean value of true for all primes

  //Assume all the numbers of a given range are primes
  for(int i = 1; i <= num; i++){
    is_prime[i] = true;
  }

  // Making 1 not prime
  is_prime[1] = false;

  // Sieve erathosenes method of finding the primes
  for(int i = 2; i <= num; i++){
    for(int j = i * i; j <= num; j += i){
      is_prime[j] = false;
    }
  }

  // Pushing the primes to the vector defined
  for(int i = 1; i <= num; i++){
    if(is_prime[i]){
      prime.push_back(i);
    }
  }

  std::cout << "The prime numbers between 1 and : " << num << " are " << std::endl;
  // Giving out the result
  for(int i = 0; i < prime.size(); i++){
    std::cout << prime[i] << ' ';
  }

  return 0;
}
