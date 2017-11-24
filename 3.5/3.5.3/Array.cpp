#include "Array.h"
using namespace bowen::Containers;
using namespace bowen::CAD;

Array::Array() {
	size = 10;
	m_data = new Point[size];
}

Array::Array(int sizeA) {
	size = sizeA;
	m_data = new Point[size];
}

Array::Array(const Array& arr) {
	size = arr.size;
	m_data = new Point[size];
	for (int i = 0; i < arr.size; ++i) {
		m_data[i] = arr.m_data[i];
	}
}

Array::~Array() {
	delete[] m_data;
}

Array& Array::operator= (const Array& arr) {
	if (&arr != this) {
		size = arr.size;
		delete[] m_data;
		m_data = new Point[size];
		for (int i = 0; i < size; ++i) {
			m_data[i] = arr.m_data[i];
		}
	}
	return *this;
}

int Array::Size() {
	return size;
}
void Array::SetElement(const Point& p, int index) {
	if (index >= 0 && index < size) {
		m_data[index] = p;
	}
}

Point& Array::GetElement(int index) {
	if (index >= 0 && index < size) {
		return m_data[index];
	}
	return m_data[0];
}

Point& Array::operator [] (int index) {
	if (index >= 0 && index < size) {
		return m_data[index];
	}
	return m_data[0];
}

const Point& Array::operator [] (int index) const {
	if (index >= 0 && index < size) {
		return m_data[index];
	}
	return m_data[0];
}