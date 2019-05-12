/*
	Implements Member Functions and Initializes Member Data of Vec class
*/

#include "Vec.h"



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
	out << "< " << v.x << " , " << v.y << " , " << v.z << " >";
	return out;
}
