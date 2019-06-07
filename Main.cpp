// Inheritance assignment
// Roselynn Conrady 6/7/2019
// ISU REU SPIRE-EIT Summer 2019

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include <string>

float w;
float l;
std::string color;
int choice;

int main() {
	std::cout << "1. Rectangle" << std::endl;
	//std::cout << "2. Circle" << std::endl;
	//std::cout << "3. Triangle" << std::endl;
	std::cin >> choice;

	switch (choice) {
	case 1:
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


		//case 2:
	}

	system("PAUSE");
	return 0;
} 
