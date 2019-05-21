/*
	N Body Problem
*/

#include<iostream>
#include "NBody.h"
#include "Vec.h" 

int main()
{
	double m1 = 1;
	double m2 = 50;
	Vec pos1(5,5,0);
	Vec pos2(-1,-1,1);
	Vec v1(1,-1,1);
	Vec v2(0,0,0); 
	int amount = 10000;
	NBody o(m1,m2,pos1,pos2,v1, v2,amount);

	o.compute(); //Computes the Position of the 2 body system
	std::cout << "Done" << std::endl;
	return 0;
}

