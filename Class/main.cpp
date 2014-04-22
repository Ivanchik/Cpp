#include <iostream>
#include "point.h"

using std::cout;
using std::endl;
/*
class point 
{

	double x,y;
	public:	
		point(double x=0.0, double y=0.0);
		double get_x() const;
		double get_y() const;
	
};


point::point(double x, double y)
{
	(*this).x = x;
	this->y = y;
}

double point::get_x() const
{
	return x;
}


double point::get_y() const
{
	return y;
}
*/
int main(int argc, char *argv[])
{
	point p1(2.5,-1.7);
	const point p2;
	point *pp = new point(32.7);	
		


	cout << p1.get_x() << endl;
	cout << p2.get_y() << endl;
	cout << pp->get_x() << endl;	
	
	
}
