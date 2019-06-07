#include "Triangle.h"
#include "Shape.h"

Triangle::Triangle(float b, float l)
{
	base = b;
	length = l;
	// This is the constructor it is called every time
}

Triangle::~Triangle()
{
	// This is the destructor
}


float Triangle::returnArea()
{
	m_area = 0.5 * base * length;
	return m_area;
}
