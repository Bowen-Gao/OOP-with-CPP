#include "Shape.h"
#include <stdlib.h>
#include <sstream>
#include <iostream>

Shape::Shape(): m_id(rand()) {
	std::cout << "Shape: Default constructor called" << std::endl;
}

Shape::Shape(const Shape& S): m_id(S.m_id){
	std::cout << "Shape: constructor 1 called" << std::endl;
}

Shape::~Shape() {
	std::cout << "Shape: Default destructor called" << std::endl;
}

Shape& Shape::operator = (const Shape& S) {
	std::cout << "Shape: Assignment operator called" << std::endl;
	m_id = S.m_id;
	return *this;
}

std::string Shape::ToString() const {
	std::stringstream ss;
	ss << "ID: " << m_id;
	std::string result = ss.str();
	return result;
}

int Shape::ID() {
	return m_id;
}