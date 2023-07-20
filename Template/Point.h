#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

template <typename T>
class Point {
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0);

	void ShowPosition() const;
};

#endif
