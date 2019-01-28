/*
Author: Donald Andrew Davis
Date last modified: 1/27/2019
Organization: ECE2036 Class
Description: ECE 2036 Lab 1 Part 2: Round Off Error
*/

#include <iostream>
#include <cmath>
using namespace std;


double doubleQuadraticFunction(int sign, double a,double b,double c){                           // Double implementation of the quadratic function
        double root;
        double num;
        double den1;
        double den2;
        double ans;
        num = 2*c;
        root = sqrt((b*b)-(4*a*c));
        den1 = -b+root;
        den2 = -b-root;
        if(sign==1){
            ans = num/den1;
        }
        else{
            ans = num/den2;
        }
        return ans;
}

float floatQuadraticFunction(int sign, float a, float b, float c){                              // Float implementation of the quadratic function
        float root;
        float num;
        float den1;
        float den2;
        float ans;
        num = 2*c;
        root = sqrt((b*b)-(4*a*c));
        den1 = -b+root;
        den2 = -b-root;
        if(sign==1){
            ans = num/den1;
        }
        else{
            ans = num/den2;
        }
        return ans;
}

int main(){
    float ansPlusFloat;
    float ansMinFloat;
    double ansPlusDouble;
    double ansMinDouble;
    double dError1;
    double dError2;
    float fError1;
    float fError2;

    ansPlusFloat = floatQuadraticFunction(1,2.0f,6000.002f,6.0f);
    ansMinFloat = floatQuadraticFunction(0,2.0f,6000.002f,6.0f);
    ansPlusDouble = doubleQuadraticFunction(1,2.0,6000.002,6.0);
    ansMinDouble = doubleQuadraticFunction(0,2.0,6000.002,6.0);
    

    dError1 = 100*((-0.001)-ansMinDouble)/-0.001;
    dError2 = 100*(-3000-ansPlusDouble)/-3000;
    fError1 = 100*((-0.001)-ansMinFloat)/-0.001;
    fError2 = 100*(-3000-ansPlusFloat)/-3000;
    cout.precision(10);
    cout << "Float Results:" << endl;
    cout << "X1 = "  << ansPlusFloat << "        " << "% Error = " <<fError1 << endl;
    cout << "X2 = " << ansMinFloat <<  "        " << "% Error = " <<fError2 << endl;
    cout.precision(17); 
    cout << "Double Results:"<<endl;
    cout << "X1 = " << ansPlusDouble << "        " << "% Error = " <<dError1 << endl;
    cout << "X2 = " <<  ansMinDouble <<  "        " << "% Error = " <<dError2 << endl;


    return 0;
}