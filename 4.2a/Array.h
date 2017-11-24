#ifndef ARRAY_H
#define ARRAY_H
//#include "Point.h"
#include <string>

namespace bowen {
	namespace Containers {
		template<typename T>
		class Array {
			T* m_data;
			int size;
		public:
			Array();
			Array(int size);
			Array(const Array<T>& arr);
			~Array();

			Array<T>& operator = (const Array<T>& arr);
			int Size();
			void SetElement(const T& p, int index);
			T& GetElement(int index);
			T& operator [] (int index);
			const T& operator [] (int index) const;
		};

		/*class ArrayException {
		public:
			virtual std::string GetMessage() = 0;
		};

		class OutOfBoundsException: public ArrayException {
			int m_index;
		public:
			OutOfBoundsException(int mindex);
			virtual std::string GetMessage();
		};*/
	}
}



#endif
