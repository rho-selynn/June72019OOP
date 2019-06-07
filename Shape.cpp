#include "Shape.h"
#include <string>

Shape::Shape() {
	color = "red";
};

Shape::Shape(std::string newColor) { // constructor
	color = newColor;
};

Shape::~Shape() { // deconstructor
}


void Shape::setColor(std::string aColor) {
	color = aColor;
}


std::string Shape::returnColor() {
	return color;
}
