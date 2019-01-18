/*
Author: <Your name>
Date last modified: <date last modified>
Organization: ECE2036 Class
Description:
Describe what is done in this file.
*/

#include <iostream>
#include <cmath>
using namespace std;

int intFiveN(int N){
    int result = 5;
    int count = N-1;
    if(N = 0)
    {
        result = 0;
    }
    else
    {
        while(count != 0)
        {
            result = result * 5;
            count = count - 1;
        }
    }
    return(result);
}




int main()
{   
    int result;
    int exponent;
    int diff;
    cout << "Please enter exponent value : ";
    cin >> exponent;
    cout << "The exponent is : " << exponent << endl;
    result = intFiveN(exponent);

    cout << "The Result is : " << result << endl;
    diff = 2147483647 - result;
    cout << "The Difference between Max is : " << diff << endl;
    
    return 0;
}