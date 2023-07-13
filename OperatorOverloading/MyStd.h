#pragma once
#include <stdio.h>
namespace mystd {
	class ostream {
	public:
		ostream& operator<< (char const* str)	{   
			printf("%s", str);	
			return *this;
		}
		ostream& operator<< (char str) {
			printf("%c", str); 
			return *this;
		}
		ostream& operator<< (int num) { 
			printf("%d", num); 
			return *this;
		}
		ostream& operator<<(double e) { 
			printf("%g", e); 
			return *this;
		}
		ostream& operator<< (ostream& (*fp)(ostream& ostm)) { 
			fp(*this); 
			return *this;
		}
	};
	ostream& endl(ostream& ostm) {
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}
	ostream cout;
}