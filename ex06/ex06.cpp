#include <iostream>
#include "fraction.h"
#include <exception>
#include <string>

using namespace std;

//bool is_number(const std::string& s)
//{
//	std::string::const_iterator it = s.begin();
//	while (it != s.end() && isdigit(*it)) ++it;
//	return !s.empty() && it == s.end();
//}

int main()
{
	int n1, n2, 
		d1, d2;
	
	char frac;
	char op[3];
	string in;
	int tmp = 0;
	int count = 0;

	while (scanf_s("%d", &tmp) == 1) {
		n1 = tmp;
		cin >> frac;
		cin >> d1;

		cin >> in;

		cin >> n2;
		cin >> frac;
		cin >> d2;

		fraction f1(n1, d1), f2(n2, d2);

		if (in.compare("+") == 0) {
			f1.add(f2);
		}
		else if (in.compare("*") == 0) {
			f1.mult(f2);
		}
		else if (in.compare("div") == 0) {
			f1.div(f2);
		}

		f1.display();
	}
		
}