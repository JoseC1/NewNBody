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

	friend std::ostream& operator<<(std::ostream& out, Vec v); //Friend function
private:
	friend class Nbody; //Now NBody can access private members of Vec
	double x,y,z;
};







#endif
