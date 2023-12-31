#ifndef _POINT_CPP_
#define _POINT_CPP_

#include "Point.h"

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
void Point<T>::ShowPosition() const {
	std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}
#endif
