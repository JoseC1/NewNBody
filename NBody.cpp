/*
	Implements all the Member Functions and Defines all the Member data of NBody class
*/

#include "NBody.h"
#include <fstream> //Used to output the data to txt files
#include <cmath>
#include <iostream>
//Default Constructor
NBody::NBody()
{
	m1 = 0;
	m2 = 0;
	pos1 = Vec(0,0,0);
	pos2 = Vec(0,0,0);
	amount = 0;
}

NBody::NBody(double m1, double m2, Vec pos1, Vec pos2, Vec v1, Vec v2, int amount)
{
	this->m1 = m1;
	this->m2 = m2;
	this->pos1 = pos1;
	this->pos2 = pos2;
	this->v1 = v1;
	this->v2 = v2;
	this->amount = amount;
}


//FOR A Two Body
//Computes the Position Velocity and accel of every Body
void NBody::compute()
{
	//Going to output the Position of Body1
	std::ofstream body1("Body1.txt"); 
	std::ofstream body2("Body2.txt");

	for(int i = 0; i < amount;i++)
	{
		//Computing the Distance inbetween both masses
		Vec r12 = pos2 - pos1;
		Vec r21 = pos1 - pos2; 
		
		//Computing the Acceleration of Each Mass
		Vec a1 = r12.scaleMul((G *m2)/(pow(r12.mag(),3)));   
		Vec a2 = r21.scaleMul((G *m1)/(pow(r21.mag(),3)));

		//Computing the Velocities 
		v1 = v1 + a1.scaleMul(deltaT);
		v2 = v2 + a2.scaleMul(deltaT);

		//Computing the Position Using Euler Cromer (Energy Conserving Method)
		pos1 = pos1 + v1.scaleMul(deltaT);
		pos2 = pos2 + v2.scaleMul(deltaT);
		
		//NOTE NOT PRINTING Z DIRECTION (TURNED IT OFF)
		body1 << pos1 << std::endl;
		body2 << pos2 << std::endl; 
	}
}




