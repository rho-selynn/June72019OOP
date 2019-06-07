#include "Rectangle.h"
#include "Shape.h"

Rectangle::Rectangle(float w, float l)
{
	width = w;
	length = l;
	// This is the constructor it is called every time
}

Rectangle::~Rectangle()
{
	// This is the destructor
}

float Rectangle::returnArea()
{
	m_area = width * length;
	return m_area;
}
