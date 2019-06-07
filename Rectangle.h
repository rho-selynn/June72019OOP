
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle:public Shape {
public:
	Rectangle(float w, float l); // The constructor prototype
	~Rectangle(); // The destructor prototype

	//void setArea(float area); // Setter
	float returnArea(); // Getter

protected:
	float m_area; // Member variable
	float width;
	float length;
};

#endif RECTANGLE_H // !1

