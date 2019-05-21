#ifndef VEC_H
#define VEC_H

#include <iostream>

//Useful because everything in 3D

class NBody; //Foward Declaration
class Vec 
{
public:
	//Default Constructor
	Vec();
	
	Vec(double x, double y, double z);
	
	Vec scaleMul(double num); //Multiplies the this->Vector with a scalor
	double mag() const; //Returns the Magnitude of the vector
	
	friend std::ostream& operator<<(std::ostream& out, Vec v); //Friend function
	friend Vec operator-(Vec v1, Vec v2); //Subtracts two vectors together and returns their result 
	friend Vec operator+(Vec v1, Vec v2); //Adds two vectors together and returns their result
	
private:
	friend class Nbody; //Now NBody can access private members of Vec
	double x,y,z;
};







#endif
