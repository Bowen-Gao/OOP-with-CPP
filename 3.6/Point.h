#ifndef POINT_H
#define POINT_H
#include "Shape.h"
#include <string>
using std::string;

namespace bowen {
	namespace CAD {
		class Point: public Shape {
			double m_x;
			double m_y;
		public:
			Point();
			explicit Point(double z);
			Point(double x, double y);
			Point(const Point& p);
			~Point();

			double X() const;
			void X(double x) { m_x = x; };
			double Y() const;
			void Y(double y) { m_y = y; };

			string ToString() const;

			double Distance() const;
			double Distance(const Point& p) const;

			Point operator - () const;
			Point operator * (double factor) const;
			Point operator + (const Point& p) const;
			bool operator == (const Point& p) const;
			Point& operator = (const Point& source);
			Point& operator *= (double factor);

			virtual void Draw();

			friend std::ostream& operator << (std::ostream& os, Point& p);
		};

		inline double Point::X() const { return m_x; }
		inline double Point::Y() const { return m_y; }

	}
}

#endif

