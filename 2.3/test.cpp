#include "Point.h"
#include <iostream>

int main() {
	std::cout << "Input x and y" << std::endl;
	double x, y;
	std::cin >> x >> y;
	Point p1(x, y);
	//p1.SetX(x);
	//p1.SetY(y);
	std::cout << p1.ToString() << std::endl;
	//std::cout << p1.X() << " " << p1.Y() << std::endl;
	//double dis_ori = p1.Distance();
	Point p2(0.9, 1.1);
	std::cout << p2.ToString() << std::endl;
	//p2.SetX(1.0);
	//p2.SetY(-1.0);
	//double dis = p1.Distance(p2);
	//std::cout << "dis_ori: " << dis_ori << " dis: " << dis << std::endl;
	//const Point cp(1.5, 3.9);
	//std::cout << cp.Y() << std::endl;

	p2 = -p1;
	//std::cout << p2.ToString() << std::endl;
	p2 = p2 * (-1.0);
	std::cout << p2 << std::endl;
	p2 = p2 + p1;
	std::cout << (p2 == (p1*=2.0)) << std::endl;


	system("pause");
	return 0;
}