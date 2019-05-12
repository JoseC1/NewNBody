/*
	Implements all the Member Functions and Defines all the Member data of NBody class
*/

#include "NBody.h"

//Default Constructor
NBody::NBody()
	: G(1)
{
	m1 = 0;
	m2 = 0;
	pos1 = Vec(0,0,0);
	pos2 = Vec(0,0,0);
}

NBody::NBody(double m1, double m2, Vec pos1, Vec pos2)
	: G(1)
{
	this->m1 = m1;
	this->m2 = m2;
	this->pos1 = pos1;
	this->pos2 = pos2;
}






