#ifndef SHAPE_H
#define SHAPE_H
#include <string>
class Shape // Class keyword tells the compiler to expect a class definition
{
public:
	Shape();
	Shape(std::string newColor);

	~Shape();

	void setColor(std::string aColor);


	std::string returnColor();


protected:
	std::string color;

};
#endif SHAPE_H // !1
