#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Array.h"
#include <iostream>

int main() {
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

	Array arr1;
	Array arr2(5);
	Array arr3(arr2);
	arr1 = arr3;
	std::cout << arr1.Size() << std::endl; //5
	Point p(1.0, 2.0);
	arr1.SetElement(p, 2);
	std::cout << arr1[2].ToString()<< arr3.GetElement(1).ToString() << std::endl;

	system("pause");
	return 0;
}