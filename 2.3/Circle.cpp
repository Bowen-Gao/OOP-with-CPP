#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <sstream>

Circle::Circle() {
	Point m(0.0, 0.0);
	centerP = m;
	radius = 0.0;
}

Circle::Circle(Point c, double r) {
	centerP = c;
	radius = r;
}

Circle::Circle(const Circle& c) {
	centerP = c.centerP;
	radius = c.radius;
}

Circle::~Circle() {
}

double Circle::Diameter() const {
	return radius * 2;
}

double Circle::Area() const {
	return radius * radius * M_PI;
}

double Circle::Circumference() const {
	return 2 * M_PI * radius;
}

string Circle::ToString () const {
	std::stringstream ss;
	ss << centerP.ToString() << " Radius: " << radius;
	string result = ss.str();
	return result;
}