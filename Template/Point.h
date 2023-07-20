#pragma once
#include <iostream>

template <typename T>
class Point {
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y) {}

	void ShowPosition() const {
		std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
	}
};