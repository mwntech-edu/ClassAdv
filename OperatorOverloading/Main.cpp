//#include <iostream>
#include "MyStd.h"
using namespace mystd;
class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const { cout << '[' << xpos << ", " << ypos << ']' << endl; }
	Point operator+(Point const& ref) {
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
	Point& operator++() { xpos += 1;   ypos += 1;   return *this; }
	const Point operator++(int) {
		const Point retobj(xpos, ypos);
		xpos += 1;   ypos += 1;  
		return retobj; 
	}
	Point operator*(int times) {
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator-(const Point& pos1, const Point& pos2);
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
	friend Point operator*(int times, Point& ref);
	friend ostream& operator<<(ostream&, const Point&);
};
Point operator-(const Point& pos1, const Point& pos2) {
	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos;
}
Point& operator--(Point& ref) { ref.xpos -= 1;  ref.ypos -= 1; return ref; }
const Point operator--(Point& ref, int) {
	const Point retobj(ref.xpos, ref.ypos);
	ref.xpos += 1;   ref.ypos += 1;
	return retobj;
}
Point operator*(int times, Point& ref) {
	//Point pos(ref.xpos * times, ref.ypos * times);
	//return pos;
	return ref * times;	//ref.operator*(times);
}
ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	Point pos4 = pos1 +pos2;
	Point pos5 = pos1 - pos2;
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	pos5.ShowPosition();
	++(++pos1);  
	pos1.ShowPosition();
	(--(--pos1)).ShowPosition();
	(pos1++).ShowPosition();
	pos1.ShowPosition();
	(pos1--).ShowPosition();
	pos1.ShowPosition();
	Point pos1_2 = pos1;
	pos1 = pos1 * 3;		//pos1.operator*(3)
	pos1.ShowPosition();
	pos1_2 = 3 * pos1_2;
	pos1_2.ShowPosition();
	cout << "My pos1 : " << pos1 << endl;

	return 0;
}