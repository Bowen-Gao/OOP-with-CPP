#include "Point.h"
#include <sstream>
#include <cmath>
#include <iostream>
using namespace bowen::CAD;

Point::Point(): Shape(), m_x(0.0), m_y(0.0) {
	std::cout << "Point: Default constructor called" << std::endl;
}

Point::Point(double z) : Shape(), m_x(z), m_y(z) {
	std::cout << "Point: constructor 1 called" << std::endl;
}

Point::Point(double x, double y) : Shape(), m_x(x), m_y(y) {
	std::cout << "Point: constructor 2 called" << std::endl;
}

Point::Point (const Point& p):Shape(p),m_x(p.m_x), m_y(p.m_y) {
	std::cout << "Point: copy constructor called" << std::endl;
}

Point::~Point () {
	std::cout << "Point: Default destructor called" << std::endl;
}

string Point::ToString () const {
	std::stringstream oss;
	oss << "Point(" << m_x << ", " << m_y << ")";
	string result = oss.str();
	return result;
}

double Point::Distance() const {
	return std::sqrt(m_x * m_x + m_y * m_y);
}

double Point::Distance(const Point& p) const {
	return std::sqrt((m_x-p.m_x)*(m_x-p.m_x) + (m_y-p.m_y)*(m_y-p.m_y));
}

Point Point::operator - () const {
	Point tmp(-m_x, -m_y);
	return tmp;
}

Point Point::operator * (double factor) const {
	Point tmp(m_x * factor,m_y * factor);
	return tmp;
}

Point Point::operator + (const Point& p) const {
	Point tmp(m_x + p.m_x, m_y + p.m_y);
	return tmp;
}

bool Point::operator == (const Point& p) const {
	return (m_x == p.m_x && m_y == p.m_y);
}

Point& Point::operator = (const Point& source) {
	std::cout << "Point: assignment operator called" << std::endl;
	if (this != &source) {
		Shape::operator= (source);
        m_x = source.m_x;
	    m_y = source.m_y;
	}
	return *this;
}

Point& Point::operator *= (double factor) {
	m_x *= factor;
	m_y *= factor;
	return *this;
}

std::ostream& bowen::CAD::operator << (std::ostream& os, Point& p) {
	os << p.ToString();
	return os;
}