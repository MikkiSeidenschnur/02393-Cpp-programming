#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

class Shape
{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void rotate() = 0;
	
	double x;
	double y;
	double ra;

	double width() {
		return x;
	}
	double height() {
		return y;
	}

	double radius() {
		return ra;
	}

};

class Rectangle : public Shape {
public:
	

	Rectangle(double h, double w) {
		y = h;
		x = w;
	}

	double area() {
		return y * x;
	}

	double perimeter() {
		return 2 * y + 2 * x;
	}

	void rotate() {
		double tmp = y;
		y = x;
		x = tmp;
	}
};

class Square : public Rectangle {
public:
	Square(double side) : Rectangle(side, side) {}
};

class Circle : public Shape {
public:
	Circle(double r) {
		ra = r;
		x = 2 * r;
		y = x;
	}

	double area() {
		return M_PI * pow(ra, 2);
	}

	double perimeter() {
		return ra * 2 * M_PI;
	}

	void rotate() {}

};

