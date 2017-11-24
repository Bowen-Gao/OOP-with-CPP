#ifndef ARRAY_H
#define ARRAY_H
#include "Point.h"

class Array {
	Point* m_data;
	int size;
public:
	Array();
	Array(int size);
	Array(const Array& arr);
	~Array();

	Array& operator = (const Array& arr);
	int Size();
	void SetElement(const Point& p, int index);
	Point& GetElement(int index);
	Point& operator [] (int index);
	const Point& operator [] (int index) const;
};

#endif
