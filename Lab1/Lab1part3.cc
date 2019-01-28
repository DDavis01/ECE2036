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

float PowerSeries(float k){
	float i = 0;
	float y = 1;
	float powerSum = 0;
	float Series = 0;

	while(i<=k){

		for (y=1;y<=i;y=y+1){

			float num = factorial(((2*k)+1));
			float den = pow(2, ((3*k)+1))*pow(factorial(k),2);
			float Series = num/den;

		}

		powerSum = powerSum + Series;
		
	}

}