#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <sstream>
using namespace bowen::CAD;

Circle::Circle(): Shape(), centerP(), radius(0.0) {
	std::cout << "Circle: Default constructor called" << std::endl;
}

Circle::Circle(Point c, double r): Shape(), centerP(c), radius(r) {
	std::cout << "Circle: constructor 1 called" << std::endl;
}

Circle::Circle(const Circle& c) : Shape(c), centerP(c.centerP), radius(c.radius){
	std::cout << "Circle: copy constructor called" << std::endl;
}

Circle::~Circle() {
	std::cout << "Circle: Default destructor called" << std::endl;
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

Circle& Circle::operator= (const Circle& source) {
	std::cout << "Circle: Assignment operator called" << std::endl;
	if (this != &source) {
		Shape::operator= (source);
		centerP = source.centerP;
	    radius = source.radius;
	}
	
	return *this;
}

std::ostream& bowen::CAD::operator<< (std::ostream& os, const Circle& C) {
	os << C.ToString();
	return os;
}