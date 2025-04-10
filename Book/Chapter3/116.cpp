//
// Created by Abenezer on 4/8/2025.
// Finding the prime - other methods efficient
// Off topic - I read today not to use the using namespace std
//

#include <iostream>
#include <vector>

// Checking if the number is a prime
bool is_prime(int num, std::vector<int>& primes){
  for(int prime : primes){
    if(prime * prime > num) break;
  	if(num % prime == 0) return false;
  }
  return true;
}

// Preparing the main fucntion to do that
int main(){
  std::vector<int> primes;
  int num1 = 0;

  for(int i = 2; i <= 100; i++){
    if(is_prime(i, primes)){
      primes.push_back(i);
    }
    num1 = i;
  }

  // Giving out the value
  std::cout <<  "The Prime numbers between 0 to " << num1 << " are " << std::endl;
  for(int prime : primes){
    std::cout << prime << " ";
  }
  std::cout << std::endl;
}


