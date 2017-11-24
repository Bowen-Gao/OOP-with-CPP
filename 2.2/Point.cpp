#include "Point.h"
#include <sstream>
#include <cmath>

Point::Point () {}

Point::~Point () {}

double Point::GetX () {
	return m_x;
}

double Point::GetY () {
	return m_y;
}

void Point::SetX (double x) {
	m_x = x;
}

void Point::SetY(double y) {
	m_y = y;
}

string Point::ToString () {
	std::stringstream oss;
	oss << "Point(" << m_x << ", " << m_y << ")";
	std::string result = oss.str();
	return result;
}

double Point::DistanceOrigin() {
	return std::sqrt(m_x * m_x + m_y * m_y);
}

double Point::Distance(Point p) {
	return std::sqrt((m_x-p.m_x)*(m_x-p.m_x) + (m_y-p.m_y)*(m_y-p.m_y));
}