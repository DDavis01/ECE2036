#pragma once
#include <iostream>
#include <string>
using std::string;

class Vector3 {
public:
    Vector3();		    			//set x, y and z to 0
    explicit Vector3(int xyz);     		//set x, y and z to xyz
    Vector3(int x, int y, int z); 		//set component by name

    int get_x() const;				
    int get_y() const;
    int get_z() const;

    void set_x(int nx);
    void set_y(int ny);
    void set_z(int nz);

    Vector3 operator+(const Vector3& rhs);      //component-wise add
    Vector3 operator-(const Vector3& rhs);      //component-wise subtract
    Vector3 operator*(const Vector3& rhs);      //component-wise multiplication
    Vector3 operator/(const Vector3& rhs);      //component-wise division

    Vector3 operator+(int rhs);                 //add rhs to each component
    Vector3 operator-(int rhs);                 //subtract rhs from each component
    Vector3 operator*(int rhs);                 //multiply each component by rhs
    Vector3 operator/(int rhs);                 //divide each component by rhs

    double operator|(const Vector3& rhs);       //dot product
    Vector3 operator^(const Vector3& rhs);      //cross product

    Vector3& operator+=(const Vector3& rhs);    //component-wise add
    Vector3& operator-=(const Vector3& rhs);    //component-wise subtract
    Vector3& operator*=(const Vector3& rhs);    //component-wise multiplication
    Vector3& operator/=(const Vector3& rhs);    //component-wise-division

    bool operator==(const Vector3& rhs);        //component-wise equality
    bool operator!=(const Vector3& rhs);        //component-wise inequality

    double length(const Vector3& rhs);			        //returns the length of the vector as a double
    
    // Vector3++ and ++Vector3 should rotate xyz to the left
    // i.e. make x = y, y = z, z = x
    // Make sure they function correctly, ++v vs v++
    Vector3& operator++();
    Vector3 operator++(int __unused);

    // Vector3-- and --Vector3 rotate xyz to the right
    // i.e. make x = z, y = x, z = y
    // Make sure they function correctly, --v vs v--
    Vector3& operator--();
    Vector3 operator--(int __unused);

private:
    int x;
    int y;
    int z;
};

Vector3 operator+(int lhs, const Vector3& rhs);

Vector3 operator*(int lhs, const Vector3& rhs);


//For easy printing of vectors
std::ostream& operator<<(std::ostream& os, const Vector3& vec);

