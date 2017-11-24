//#include "Point.h"
//#include "Line.h"
//#include "Circle.h"
//#include "Array.cpp"
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

template<typename T>
double Sum(const T& ctnr) {
	T::const_iterator it = ctnr.begin();
	double sum = 0;
	for (it = ctnr.begin(); it != ctnr.end(); ++it) {
		sum = sum + *it;
	}
	return sum;
}

template<typename T>
double Sum(T it1, T it2) {
	double sum = 0;
	T it;
	for (it = it1; it != it2; ++it) {
		sum += *it;
	}
	return sum;
}

//bool smaller(double num) {
//	return num < 1.15;
//}

class smaller {
	double n;
public:
	smaller() { n = 1.15; };
	bool operator () (double num) { return num < n; };
};

int main() {
	//using namespace bowen::CAD;
	//using namespace bowen::Containers;
	using namespace std;
	//std::cout << "Input x and y" << std::endl;
	//double x, y;
	//std::cin >> x >> y;
	//Point p1(x, y);
	//p1.SetX(x);
	//p1.SetY(y);
	//std::cout << p1.ToString() << std::endl;
	//std::cout << p1.X() << " " << p1.Y() << std::endl;
	//double dis_ori = p1.Distance();
	//Point p2(0.9, 1.1);
	//std::cout << p2.ToString() << std::endl;
	//p2.SetX(1.0);
	//p2.SetY(-1.0);
	//double dis = p1.Distance(p2);
	//std::cout << "dis_ori: " << dis_ori << " dis: " << dis << std::endl;
	//const Point cp(1.5, 3.9);
	//std::cout << cp.Y() << std::endl;

	//p2 = -p1;
	//std::cout << p2.ToString() << std::endl;
	/*p2 = p2 * (-1.0);
	std::cout << p2 << std::endl;
	p2 = p2 + p1;
	std::cout << (p2 == (p1*=2.0)) << std::endl;

	std::cout << p2 << std::endl;
	Line line1(p1, p2);
	std::cout << line1 << std::endl;
	Circle Circle1(p2, 1.1);
	std::cout << Circle1 << std::endl;*/

	/*Point p(1.0, 1.0);
	if (p == (Point)1.0) std::cout << "Equal!" << std::endl;
	else std::cout << "Not equal!" << std::endl;*/
	/*Point* p;
	Point* p1;
	p = new Point;
	p1 = new Point(1.0, 2.0);
	Point* p2 = new Point (*p1);
	std::cout << (*p2).Distance() << std::endl;
	delete p, p1, p2;
	int n;
	std::cin >> n;
	Point* p = new Point[n];
	delete[] p;*/

	/*Point** p = new Point*[3];
	p[0] = new Point;
	p[1] = new Point(1.0, 2.0);
	p[2] = new Point(3.0);
	for (int i = 0; i < 3; ++i) {
		std::cout << (*p[i]).ToString() << std::endl;
	}
	for (int i = 0; i < 3; ++i) {
		delete p[i];
	}
	delete[] p;*/

	//Array arr1;
	//Array arr2(5);
	//Array arr3(arr2);
	//arr1 = arr3;
	//std::cout << arr1.Size() << std::endl; //5
	//Point p(1.0, 2.0);
	//arr1.SetElement(p, 2);
	//std::cout << arr1[2].ToString()<< arr3.GetElement(1).ToString() << std::endl;

	/*Line L;*/
	//Shape s; // Create shape.
	//Point p(10, 20); // Create point.
	//Line l(Point(1, 2), Point(3, 4)); // Create line.
	//cout << s.ToString() << endl; // Print shape.
	//cout << p.ToString() << endl; // Print point.
	//cout << l.ToString() << endl; // Print line
	//cout << "Shape ID: " << s.ID() << endl; // ID of the shape.
	//cout << "Point ID: " << p.ID() << endl; // ID of the point. Does this work?
	//cout << "Line ID: " << l.ID() << endl; // ID of the line. Does this work?
	//Shape* sp; // Create pointer to a shape variable.
	//sp = &p; // Point in a shape variable. Possible?
	//cout << sp->ToString() << endl; // What is printed?
	//								// Create and copy Point p to new point.
	//Point p2;
	//p2 = p;
	//cout << p2 << ", " << p2.ID() << endl; // Is the ID copied if you do not call
	//									   // the base class assignment in point?

	/*Shape* sp;
	sp = new Point;
	std::cout << sp->ToString() << endl;*/

	/*Shape* shapes[3];
	shapes[0] = new Shape;
	shapes[1] = new Point;
	shapes[2] = new Line;
	for (int i = 0; i != 3; i++) delete shapes[i];*/

	/*Point a;
	Line b;
	a.Print();
	b.Print();*/

//try {
//	Array arr(1);
//	arr[-1];
//}
//
//catch (int err) {
//	if (err == -1) std::cout << "Error: Wrong index." << std::endl;
//}
//catch (ArrayException& e) {
//	std::cout << "ArrayException:" << std::endl;
//	cout << e.GetMessage() << endl;
//}
    //Array<Point> points(10);

    list<double> l;
	l.push_back(1.2);
	l.push_front(2.1);
	cout << l.front() << " " << l.back() << endl;
	vector<double> vec;
	vec.reserve(2);
	vec.push_back(1.1);
	vec.push_back(1.2);
	vec.push_back(1.0);
	vec.push_back(0.9);
	cout << vec[0] << " " << vec[1] << endl;
	map<const char*, double> m;
	m["monday"] = 1.1;
	m["tuesday"] = 2.2;
	cout << m["monday"] << " " << m["tuesday"] << endl;
	cout << Sum(l) << " " << Sum(vec) << endl;
	l.push_back(1.3);
	list<double>::const_iterator it = l.begin();
	list<double>::const_iterator itt = l.end();
	itt--;
	cout << Sum(it, itt) << endl;

	vector<double>::iterator::difference_type result;
	result = count_if(vec.begin(), vec.end(), smaller());
	cout << result << endl;

	system("pause");
	return 0;
}