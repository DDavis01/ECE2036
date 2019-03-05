#include "vector3.h"
#include "math.h"
#include "string"

using namespace std;

int Vector3::get_x() const{
	return this->x;
};				

int Vector3::get_y() const{
	return this->y;
};	

int Vector3::get_z() const{
	return this->z;
};	

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
Vector3::Vector3(){
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(int xyz)
{
    this->x = xyz / 100 % 10;
	this->y = xyz / 10 % 10;
	this->z = xyz % 10;
}

Vector3::Vector3(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

/////////////////////////////////////////////////// Component Wise Operations ////////////////////////////////


Vector3 Vector3::operator+(const Vector3& rhs)
{
	Vector3 result;
	result.x = this->x + rhs.x;
	result.y = this->y + rhs.y;
	result.z = this->z + rhs.z;

	return result;
}

Vector3 Vector3::operator-(const Vector3& rhs)
{
	Vector3 result;
	result.x = this->x - rhs.x;
	result.y = this->y - rhs.y;
	result.z = this->z - rhs.z;

	return result;
}

Vector3 Vector3::operator*(const Vector3& rhs)
{
	Vector3 result;
	result.x = this->x * rhs.x;
	result.y = this->y * rhs.y;
	result.z = this->z * rhs.z;

	return result;
}

Vector3 Vector3::operator/(const Vector3& rhs)
{
	Vector3 result;
	result.x = this->x / rhs.x;
	result.y = this->y / rhs.y;
	result.z = this->z / rhs.z;

	return result;
}


////////////////////////////////////////////////////// Integer Wise Operations /////////////////////////////////////////////////////////////////////////////////////////////////
Vector3 Vector3::operator+(int rhs)
{
	Vector3 result;
	result.x = this->x + rhs;
	result.y = this->y + rhs;
	result.z = this->z + rhs;

	return result;
}

Vector3 Vector3::operator-(int rhs)
{
	Vector3 result;
	result.x = this->x - rhs;
	result.y = this->y - rhs;
	result.z = this->z - rhs;

	return result;
}

Vector3 Vector3::operator*(int rhs)
{
	Vector3 result;
	result.x = this->x * rhs;
	result.y = this->y * rhs;
	result.z = this->z * rhs;

	return result;
}

Vector3 Vector3::operator/(int rhs)
{
	Vector3 result;
	result.x = this->x / rhs;
	result.y = this->y / rhs;
	result.z = this->z / rhs;

	return result;
}


/////////////////////////////////////// Dot and Cross Product //////////////////////////////////////////////////////////////////////////////////////////////////////////////


double Vector3::operator|(const Vector3& rhs)
{ 
    return (x * rhs.x + y * rhs.y + z * rhs.z);    
}

Vector3 Vector3::operator^(const Vector3& rhs)
{
	return Vector3(y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x);
}
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// Operation Assignment Operators ////////////////////////////////////////////////////////////////////////////////////////////////////////////

Vector3 &Vector3::operator+=(const Vector3& rhs)
    {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        return *this;
}

Vector3 &Vector3::operator-=(const Vector3& rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
        z -= rhs.z;
        return *this;
}

Vector3 &Vector3::operator*=(const Vector3& rhs)
    {
        x *= rhs.x;
        y *= rhs.y;
        z *= rhs.z;
        return *this;
}

Vector3 &Vector3::operator/=(const Vector3& rhs)
{
        x /= rhs.x;
        y /= rhs.y;
        z /= rhs.z;
        return *this;
}
////////////////////////////////////////////////////////// Boolean Comparison Operations ////////////////////////////////////////////////////////////////////////////////////////

bool Vector3::operator==(const Vector3& rhs)
{
	bool areEqual =
		this->x == rhs.x &&
		this->y == rhs.y &&
		this->z == rhs.z;
	return areEqual;
}

bool Vector3::operator!=(const Vector3& rhs)
{
	bool notEqual = !(*this == rhs);
	return notEqual;
}

//////////////////////////////////////// Length Function ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double Vector3::length(const Vector3& rhs)
{ 
    return sqrt((rhs.x * rhs.x + rhs.y * rhs.y + rhs.z * rhs.z)); 

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////// Rotation Operations ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Vector3 Vector3::operator++(int __unused)
{
	Vector3 result;
    /// x = y, y = z, z = x
    int a = x;
    int b = y;
    int c = z;
    result.x = b;
    result.y = c;
    result.z = a;
	return result;
}

Vector3 Vector3::operator--(int __unused)
{
	Vector3 result;
    /// x = z, y = x, z = y
    int a = x;
    int b = y;
    int c = z;
    result.x = c;
    result.y = a;
    result.z = b;
	return result;
}
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Vector3 operator+(int lhs, const Vector3& rhs){
	Vector3 result(rhs);
    return (result + lhs); 
}

Vector3 operator*(int lhs, const Vector3& rhs){
	Vector3 result(rhs);
    return (result + lhs); 
}

std::ostream& operator<<(std::ostream& os, const Vector3& vec)
{
	os << vec.get_x() << "," << vec.get_y() << "," << vec.get_z() << endl;
	return os;
}