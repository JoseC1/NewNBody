/*
	Contains All the Member functions and Member data of the NBody class
*/
#ifndef N_BODY_H
#define N_BODY_H
#include <string>
#include <vector> 
#include <iostream>
#include "Vec.h"

class NBody
{
public:
	//Default Constructor
	NBody();
	NBody(double m1, double m2, Vec pos1, Vec pos2);
	void getVec1() const;
private:
	double m1;
	double m2;
	Vec pos1; //Initial Position of m1
	Vec pos2; //Initial Position of m2
	const double G; //Gravitational Constant
	//Assume the inital Velocity is 0 
};





#endif
