#include "Shape.h"
#include <stdlib.h>
#include <sstream>

Shape::Shape(): m_id(rand()) {
}

Shape::Shape(const Shape& S): m_id(S.m_id){
}

Shape& Shape::operator = (const Shape& S) {
	m_id = S.m_id;
	return *this;
}

std::string Shape::ToString() {
	std::stringstream ss;
	ss << "ID: " << m_id;
	std::string result = ss.str();
	return result;
}

int Shape::ID() {
	return m_id;
}