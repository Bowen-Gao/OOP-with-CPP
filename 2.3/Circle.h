#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
	Point centerP;
	double radius;
public:
	Circle();
	Circle(Point c, double r);
	Circle(const Circle& c);
	~Circle();
	Point CenterPoint() const { return centerP; }
	void CenterPoint(const Point& p) { centerP = p; }
	double Radius() const { return radius; }
	void Radius(const double& r) { radius = r; }
	double Diameter() const;
	double Area() const;
	double Circumference() const;
	string ToString() const;
};
#endif