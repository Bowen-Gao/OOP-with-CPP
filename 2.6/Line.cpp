#include "Line.h"
#include <sstream>
using namespace bowen::CAD;

Line::Line() {
	Point x(0.0, 0.0);
	start = x;
	Point y(0.0, 0.0);
	end = y;
}

Line::Line(Point& S, Point& E) {
	start = S;
	end = E;
}

Line::Line(const Line& L) {
	start = L.start;
	end = L.end;
}


Line::~Line() {

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
	start = source.start;
	end = source.end;
	return *this;
}

std::ostream& operator << (std::ostream& ost, const Line& L) {
	ost << L.ToString();
	return ost;
}