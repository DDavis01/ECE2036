/*
Author: Donald Andrew Davis
Date last modified: 1/27/2019
Organization: ECE2036 Class
Description: ECE 2036 Lab 1 Part 4: Error Puzzle
*/

#include <iostream>
#include <cmath>
using namespace std;

// Initalizing variables

double sq_rt_2 = 1.414213562373095048801688724209698078569671875376948073176679;

float arrayF [100];
double arrayD [100];
float floatSumF = 0;
double doubleSumF = 0;
float floatSumB = 0;
double doubleSumB = 0;
float elementF;
double elementD;


// Calculate Factorials with floats or doubles


float factorial(float n) {
    if (n == 0){
		return 1;
	}
    return n * factorial(n - 1);
}

double dfactorial(double n) {
    if (n == 0){
		return 1;
	}
    return n * factorial(n - 1);
}


// Power Series representation with double and float


float floatPowerSeries(float k){
	float i = 0;
	float y = 0;
	float Series = 0;
	float num;
	float den;
	
	while(i<=k){

		for (y=0;y<=i;y=y+1){

			num = factorial(((2*k)+1));
			den = pow(2, ((3*k)+1))*pow(factorial(k),2);
			
		}
		Series = num/den;
		i=i+1;
	}
	return Series;
}

double doublePowerSeries(double k){
	double i = 0;
	double y = 0;
	double Series = 0;
	double num;
	double den;
	while(i<=k){

		for (y=0;y<=i;y=y+1){

			num = dfactorial(((2*k)+1));
			den = pow(2, ((3*k)+1))*pow(dfactorial(k),2);
			

		}
		Series = num/den;
		i = i+1;
	}
	return Series;
}

int main(){
    // Find power series elements and add to arrays
    for(float y = 0; y<=100;y=y+1){ 
        int n = y;
        float series = floatPowerSeries(y);
        arrayF[n] = series;
    }

    for(double y = 0; y<=100;y=y+1){ 
        int n = y;
        double series = doublePowerSeries(y);
        arrayD[n] = series;
    }

    // Float summations for array elements. Forward and backward.

    for (int i = 0; i < 100; i++){
        elementF = arrayF[i];
        if(isnan(elementF)){
            elementF = 0;
        }
        floatSumF = floatSumF + elementF;
    }
    for (int i = 100; i > 0; i--){
        elementF = arrayF[i];
        if(isnan(elementF)){
            elementF = 0;
        }
        floatSumB = floatSumB + elementF;
    }

    // Double summations for array elements, also forward and backward.

    for (int i = 0; i < 100; i++){
        elementD = arrayD[i];
        if(isnan(elementD)){
            elementD = 0;
        }
        doubleSumF = doubleSumF + elementD;
    }
    for (int i = 100; i > 0; i--){
        elementD = arrayD[i];
        if(isnan(elementD)){
            elementD = 0;
        }
        doubleSumB = doubleSumB + elementD;
    }

    cout.precision(10);
    cout << "Float Results:"<<endl;
    cout << "--------------------"<<endl;
    cout << "forward approx = " << floatSumF << endl;
    cout << "forward error = " << 100*(sq_rt_2-floatSumF)/sq_rt_2 << endl;
    cout << "backward approx = " << floatSumB << endl;
    cout << "backward error = " << 100*(sq_rt_2-floatSumB)/sq_rt_2 << endl;


    cout.precision(17);
    cout << "Double Results:"<<endl;
    cout << "--------------------"<<endl;
    cout << "forward approx = " << doubleSumF << endl;
    cout << "forward error = " << 100*(sq_rt_2-doubleSumF)/sq_rt_2 << endl;
    cout << "backward approx = " << doubleSumB << endl;
    cout << "backward error = " << 100*(sq_rt_2-doubleSumB)/sq_rt_2 << endl;
}