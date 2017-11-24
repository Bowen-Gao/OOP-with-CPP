#include "Line.h"
#include <sstream>
#include <iostream>
using namespace bowen::CAD;

Line::Line():start(), end() {
	std::cout << "Line: Default constructor called" << std::endl;
}

Line::Line(Point& S, Point& E):start(S), end(E) {
	std::cout << "Line: constructor 1 called" << std::endl;
}

Line::Line(const Line& L):start(L.start), end(L.end) {
	std::cout << "Line: constructor 2 called" << std::endl;
}


Line::~Line() {
	std::cout << "Line: destructor called" << std::endl;
};

Point Line::Start() const {
	return start;
}

void Line::Start(double x, double y) {
	start.X(x);
	start.Y(y);
}

Point Line::End() const {
	return end;
}

void Line::End(double x, double y) {
	end.X(x);
	end.Y(y);
}

string Line::ToString() const {
	std::stringstream os;
	os << "Start: " << start.ToString() << " End: " << end.ToString();
	string result = os.str();
	return result;
}

double Line::Length() const {
	double length = start.Distance(end);
	return length;
}

Line& Line::operator = (const Line& source) {
	std::cout << "Line: Assignment operator called" << std::endl;
	start = source.start;
	end = source.end;
	return *this;
}

std::ostream& operator << (std::ostream& ost, const Line& L) {
	ost << L.ToString();
	return ost;
}