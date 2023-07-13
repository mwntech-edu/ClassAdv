#pragma once
#include <stdio.h>

namespace mystd {

	class ostream {
	public:
		void operator<< (char const* str)		{   printf("%s", str);	}

		void operator<< (char str) { printf("%c", str); }

		void operator<< (int num) { printf("%d", num); }

		void operator<<(double e) { printf("%g", e); }

		void operator<< (ostream& (*fp)(ostream& ostm)) { 
			fp(*this); 
		}
	};

	ostream& endl(ostream& ostm) {
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}

	ostream cout;
}