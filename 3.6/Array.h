#ifndef ARRAY_H
#define ARRAY_H
#include "Point.h"


namespace bowen {
	namespace Containers {
		class Array {
			bowen::CAD::Point* m_data;
			int size;
		public:
			Array();
			Array(int size);
			Array(const Array& arr);
			~Array();

			Array& operator = (const Array& arr);
			int Size();
			void SetElement(const bowen::CAD::Point& p, int index);
			bowen::CAD::Point& GetElement(int index);
			bowen::CAD::Point& operator [] (int index);
			const bowen::CAD::Point& operator [] (int index) const;
		};

		class ArrayException {
		public:
			virtual std::string GetMessage() = 0;
		};

		class OutOfBoundsException : public ArrayException {
			int m_index;
		public:
			OutOfBoundsException(int mindex);
			virtual std::string GetMessage();
		};
	}
}

#endif
