/*
	Contains All the Member functions and Member data of the NBody class
*/
#ifndef N_BODY_H
#define N_BODY_H
#include <string>
#include <vector> 
#include <iostream>
#include "Vec.h"

const double deltaT = 0.01; //The precision
const double G = 1; //Gravitational Constant

class NBody
{
public:
	//Default Constructor
	NBody();
	NBody(double m1, double m2, Vec pos1, Vec pos2, Vec v1, Vec v2,int amount);
	void compute(); //Computes the Position,velocity, and Accel of every Body	
private:
	double m1;
	double m2;
	Vec pos1; //Initial Position of m1
	Vec pos2; //Initial Position of m2
	Vec v1; //Initial Velocity of m1
	Vec v2; //Initial Velocity of m2
	int amount; //Amount of times to conduct the simulation	
};


#endif
