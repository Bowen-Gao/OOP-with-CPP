#ifndef LINE_H
#define LINE_H
#include "Point.h"

namespace bowen {
	namespace CAD {
		class Line {
			Point start;
			Point end;

		public:
			Line();
			Line(Point& start, Point& end);
			Line(const Line& L);
			~Line();
			Point Start() const;
			void Start(double x, double y);
			Point End() const;
			void End(double x, double y);
			string ToString() const;
			double Length() const;

			Line& operator = (const Line& source);

			friend std::ostream& operator << (std::ostream& os, const Line& L);

		};
	}
}

#endif
