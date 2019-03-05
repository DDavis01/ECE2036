#include <iostream>
#include "vector3.h"

using namespace std;

int main() {
    cout << "-- Vector3 --" << endl;

	Vector3 vector1(100, 200, 300);
	Vector3 vector2(5, 6, 7);
	Vector3 vector3(5, 6, 7);

	cout << "v1 = " << vector1 << endl;
	cout << "v2 = " << vector2 << endl;
	cout << "v3 = " << vector3 << endl;
	cout << endl;


	cout << "v1 + v2 = " << (vector1 + vector2) << endl;
	cout << "v1 - v2 = " << (vector1 - vector2) << endl;
	cout << "v2 + v1 = " << (vector2 + vector1) << endl;
	cout << "v2 - v1 = " << (vector2 - vector1) << endl;

	cout << "v1 * 10.0 = " << (vector1 * 10.0) << endl;
	cout << "10.0 * v1 = " << (10.0 * vector1) << endl;

	cout << "v1 / 10.0 = " << (vector1 / 10.0) << endl;


	cout << "v1 == v2: " << (vector1 == vector2) << endl;
	cout << "v2 == v3: " << (vector2 == vector3) << endl;

	cout << "v1 != v2: " << (vector1 != vector2) << endl;
	cout << "v2 != v3: " << (vector2 != vector3) << endl;
    
	cout << "Dot(v1, v2) = " << (vector1 | vector2) << endl;
    cout << "Cross(v1, v2) = " << (vector1 ^ vector2) << endl << endl;

	cout << "V1++ = " << (vector1++) << endl << endl;
	cout << "V1-- = " << (vector1--) << endl << endl;

}