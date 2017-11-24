#include "Point.h"
#include <iostream>

int main() {
	std::cout << "Input x and y" << std::endl;
	double x, y;
	std::cin >> x >> y;
	Point p1;
	p1.SetX(x);
	p1.SetY(y);
	std::cout << p1.ToString() << std::endl;
	std::cout << p1.GetX() << " " << p1.GetY() << std::endl;
	double dis_ori = p1.DistanceOrigin();
	Point p2;
	p2.SetX(1.0);
	p2.SetY(-1.0);
	double dis = p1.Distance(p2);
	std::cout << "dis_ori: " << dis_ori << " dis: " << dis << std::endl;
	system("pause");
	return 0;
}