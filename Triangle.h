#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle:public Shape {
public:
	Triangle(float b, float l); // The constructor prototype
	~Triangle(); // The destructor prototype

	//void setArea(float area); // Setter
	float returnArea(); // Getter

protected:
	float m_area; // Member variable
	float base;
	float length;
};

#endif TRIANGLE_H // !1

