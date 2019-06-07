#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape {
public:
	Circle(float radius); // The constructor prototype
	~Circle(); // The destructor prototype

	void setArea(float area); // Setter
	float returnArea(); // Getter

protected:
	float m_area; // Member variable
	float radius;
};

#endif Circle_H // !1

