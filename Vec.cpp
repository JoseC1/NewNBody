/*
	Implements Member Functions and Initializes Member Data of Vec class
*/

#include "Vec.h"
#include <cmath> 


//Default Constructor
Vec::Vec()
{
	x = y = z = 0;
}

Vec::Vec(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

//Vec Friend Function
std::ostream& operator<<(std::ostream& out, Vec v)
{
	out << v.x << " , " << v.y ;
	return out;
}

//Multiplies the this->Vec with a scalor 
Vec Vec::scaleMul(double num)
{
	return Vec(this->x * num, this->y * num, this->z * num);
}

//Friend Function Subtracts two vectors together 
Vec operator-(Vec v1, Vec v2)
{
	return Vec(v1.x - v2.x, v1.y -v2.y, v1.z - v2.z);
}

//Friend Function Adds two  vectors together

Vec operator+(Vec v1, Vec v2)
{
	return Vec(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

//Returns the Magnitude of the Vector 
double Vec::mag() const
{
	return sqrt(pow(this->x,2) + pow(this->y, 2) + pow(this->z,2));
}


