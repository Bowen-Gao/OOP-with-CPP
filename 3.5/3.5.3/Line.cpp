#include "Line.h"
#include <sstream>
#include <iostream>
using namespace bowen::CAD;

Line::Line(): Shape(),start(), end() {
	std::cout << "Line: Default constructor called" << std::endl;
}

Line::Line(Point& S, Point& E) : Shape(), start(S), end(E) {
	std::cout << "Line: constructor 1 called" << std::endl;
}

Line::Line(const Line& L):Shape(L), start(L.start), end(L.end) {
	std::cout << "Line: copy constructor called" << std::endl;
}


Line::~Line() {
	std::cout << "Line: Default destructor called" << std::endl;
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
	string s = Shape::ToString();
	std::stringstream os;
	os << "Start: " << start.ToString() << " End: " << end.ToString() << " " << s;
	string result = os.str();
	return result;
}

double Line::Length() const {
	double length = start.Distance(end);
	return length;
}

Line& Line::operator = (const Line& source) {
	std::cout << "Line: Assignment operator called" << std::endl;
	if (this != &source) {
        Shape::operator=(source);
	    start = source.start;
	    end = source.end;
	}
	return *this;
}

std::ostream& bowen::CAD::operator << (std::ostream& ost, const Line& L) {
	ost << L.ToString();
	return ost;
}