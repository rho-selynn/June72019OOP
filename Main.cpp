// Inheritance assignment
// Roselynn Conrady 6/7/2019
// ISU REU SPIRE-EIT Summer 2019

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <string>

float w;
float l;
float r;
float b;
std::string color;
int choice;

int main() {
	std::cout << "1. Rectangle" << std::endl;
	std::cout << "2. Circle" << std::endl;
	std::cout << "3. Triangle" << std::endl;
	std::cin >> choice;

	switch (choice) {
		
	case 1:
	{
		std::cout << "Width?" << std::endl;
		std::cin >> w;
		std::cout << "Length?" << std::endl;
		std::cin >> l;

		Rectangle aRec(w, l);
		std::cout << "Area: " << aRec.returnArea() << std::endl;

		std::cout << "Here's a color!" << std::endl;
		Rectangle someColor();
		std::cout << aRec.returnColor() << std::endl;
		break;
	}

	case 2:
	{
		std::cout << "Radius?" << std::endl;
		std::cin >> r;

		Circle aCirc(r);
		std::cout << "Area: " << aCirc.returnArea() << std::endl;

		std::cout << "Here's a color!" << std::endl;
		Circle someColor();
		std::cout << aCirc.returnColor() << std::endl;
	break;
	}
	case 3:

		std::cout << "Base?" << std::endl;
		std::cin >> b;
		std::cout << "Length?" << std::endl;
		std::cin >> l;

		Triangle aTri(b, l);
		std::cout << "Area: " << aTri.returnArea() << std::endl;

		std::cout << "Here's a color!" << std::endl;
		Triangle someColor();
		std::cout << aTri.returnColor() << std::endl;
		break;

	}

	system("PAUSE");
	return 0;
} 
