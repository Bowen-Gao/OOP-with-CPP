#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
	int m_id;

public:
	Shape();
	Shape(const Shape& S);
	Shape& operator = (const Shape& S);
	virtual std::string ToString() const;
	int ID();
};

#endif
