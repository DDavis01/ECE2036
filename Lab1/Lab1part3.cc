/*
Author: Donald Andrew Davis
Date last modified: <date last modified>
Organization: ECE2036 Class
Description: Describe what is done in this file.
*/

#include <iostream>
#include <cmath>
using namespace std;



double sq_rt_2 = 1.414213562373095048801688724209698078569671875376948073176679;

float factorial(float n) 
{
    if (n == 0){
		return 1;
	}
    return n * factorial(n - 1);
}

double dfactorial(double n) 
{
    if (n == 0){
		return 1;
	}
    return n * factorial(n - 1);
}

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
	cout.precision(10);
	cout << "Input the number of terms in the power series using FLOATS:";


	float floatTerms = 0;
	cin >> floatTerms;
	cout << floatTerms << endl;
	

	for(float y = 0; y<=floatTerms;y=y+1){
		float floatSeries = floatSeries + floatPowerSeries(y);
		cout << "-------------------------------------------" << endl;
		cout << "# terms = " << y << endl;
		cout << "approx = " << floatSeries << endl;
		cout << "% error = " << 100*(sq_rt_2-floatSeries)/sq_rt_2 << endl;
	}



	cout.precision(17);
	cout << "Input the number of terms in the power series using DOUBLES:";
	double dTerms = 0;
	double dSeries;
	cin >> dTerms;
	cout << dTerms << endl;
	for(double y = 0; y<=dTerms;y=y+1){
		dSeries = dSeries + doublePowerSeries(y);
		cout << "-------------------------------------------" << endl;
		cout << "# terms = " << y << endl;
		cout << "approx = " << dSeries << endl;
		cout << "% error = " << 100*(sq_rt_2-dSeries)/sq_rt_2 << endl;
	}







}