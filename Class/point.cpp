#include <iostream>
#include "point.h"

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


