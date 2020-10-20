#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b){
	x = a;
	y = b;
}

v2d::v2d(const v2d & v) : v2d(v.x, v.y) {}

v2d::~v2d(){

}

v2d & v2d::operator=(const v2d &v){
	this->x = v.x;
	this->y = v.y;
	return *this; 
}

v2d & v2d::operator+(const v2d &v){
	this->x = this->x + v.x;
	this->y = this->y + v.y;

	return *this;
}

v2d & v2d::operator*(double k){
	this->x = this->x * k;
	this->y = this->y * k;

	return *this;
}

double v2d::operator*(const v2d& v) {
	double x1;
	double y1;
	
	x1 = this->x* v.x;
	y1 = this->y* v.y;

	return x1 + y1; 
}

double v2d::length(){
	return sqrt(pow(this->x - 0, 2) + pow(this->y - 0, 2));
}

