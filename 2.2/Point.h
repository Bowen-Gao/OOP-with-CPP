#ifndef POINT_CPP
#define POINT_CPP
#include <string>
using std::string;

class Point {
	double m_x;
	double m_y;
public:
	Point();
	~Point();

	double GetX();
	double GetY();

	void SetX(double x);
	void SetY(double y);

	string ToString();

	double DistanceOrigin();
	double Distance(Point p);
};

#endif

