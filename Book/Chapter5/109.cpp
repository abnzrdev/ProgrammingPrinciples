//
// Created by Abenezer on 5/4/2025.
// Vector sum program
//
#include "std_lib_facilities.h"

int sum_vecs(int size, vector<int>& vec){
    // Getting the vector
    for(string str_num; (cin >> str_num) && (str_num !=  "|");){
        int num = stoi(str_num);
        vec.push_back(num);
    }

    // Handling runtime errors
    if(size > vec.size()){ // if the user gives more than the vector size
        throw runtime_error("Not Enough Values to calculate the sum");
    }

    // Calculating the sum
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += vec[i];
    }

    return sum;
}

int main(){

    try{
        int size = 0;
        cout << "Enter the number of elements to sum: ";
        cin >> size;

        // Another runtime error
        if (size <= 0) { // if the user gives zero as a size
            throw runtime_error("Size must be greater than 0.");
        }

        vector<int> vecs;

        cout << sum_vecs(size, vecs);
        return 0;
    }
    catch(exception& e){
        cout << e.what() << endl;
    }
    catch(...){
        cout << "Unexpected Error Occured." << endl;
    }

    return 0;
}