#include "Circle.h"
#include "Shape.h"

Circle::Circle(float r)
{
	radius = r;
	// This is the constructor it is called every time
}

Circle::~Circle()
{
	// This is the destructor
}


float Circle::returnArea()
{
	m_area = radius * radius * 3.14;
	return m_area;
	
}
