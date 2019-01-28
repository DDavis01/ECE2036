/*
Author: Donald Andrew Davis
Date last modified: 1/26/2019
Organization: ECE2036 Class
Description: ECE 2036 Lab 1 Part 1. Calculating out of range errors
*/

#include <iostream> 
using namespace std;


int powerFiveInt(int exponent){                                    // Integer implementation of powers of 5
    
    int result = 5;
    for(int N = 1; N <=exponent; ++N){
        if(N==1)
        {
        result = 5;
        }
        else{
        result = result * 5;
        }
        cout << "Integer: 5^" << N << " is: "<< result << endl;
        if(result<0){
            break;
        }
    }
    return 0;
}



long long powerFiveLong(int exponent){                            // Long Long implentation of powers of 5 
    
    long long result = 5;
    for(int N = 1; N <=exponent; ++N){
        if(N==1)
        {
        result = 5;
        }
        else{
        result = result * 5;
        }
        cout << "Long Long: 5^" << N << " is: "<< result << endl;
        if(result<0){
            break;
        }
    }
    return 0;
}



int main()
{   
    
    int result;
    int exponent = 128;
    powerFiveInt(exponent);
    powerFiveLong(exponent);
    return 0;
}