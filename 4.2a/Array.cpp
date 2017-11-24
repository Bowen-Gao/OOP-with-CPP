#include "Array.h"

using namespace bowen::Containers;
//using namespace bowen::CAD;

template <typename T>
Array<T>::Array() {
	size = 10;
	m_data = new T[size];
}

template <typename T>
Array<T>::Array(int sizeA) {
	size = sizeA;
	m_data = new T[size];
}

template <typename T>
Array<T>::Array(const Array<T>& arr) {
	size = arr.size;
	m_data = new T[size];
	for (int i = 0; i < arr.size; ++i) {
		m_data[i] = arr.m_data[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] m_data;
}

template <typename T>
Array<T>& Array<T>::operator= (const Array<T>& arr) {
	if (&arr != this) {
		size = arr.size;
		delete[] m_data;
		m_data = new T[size];
		for (int i = 0; i < size; ++i) {
			m_data[i] = arr.m_data[i];
		}
	}
	return *this;
}

template <typename T>
int Array<T>::Size() {
	return size;
}

template <typename T>
void Array<T>::SetElement(const T& p, int index) {
	if (index >= 0 && index < size) {
		m_data[index] = p;
	}
	//else { throw - 1;}
}

template <typename T>
T& Array<T>::GetElement(int index) {
	if (index >= 0 && index < size) {
		return m_data[index];
	}
	//else { throw - 1; }
	return m_data[0];
}

template <typename T>
T& Array<T>::operator [] (int index) {
	if (index >= 0 && index < size) {
		return m_data[index];
	}
	/*else { 
		OutOfBoundsException a(index);
		throw a; }*/
	return m_data[0];
}

template <typename T>
const T& Array<T>::operator [] (int index) const {
	if (index >= 0 && index < size) {
		return m_data[index];
	}
	else { 
		OutOfBoundsException a(index);
		throw a; }
	//return m_data[0];
}

//OutOfBoundsException::OutOfBoundsException(int mindex) {
//	m_index = mindex;
//}
//
//std::string OutOfBoundsException::GetMessage() {
//	std::string result = "OutOfBoundsException: Index is out of bounds.";
//	return result;
//}

