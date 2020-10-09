#include "fraction.h"
#include <iostream>
#include <exception>
using namespace std;

// Internal representation of a fraction as two integers
int numerator = 0;
int denominator = 0;

// Class constructor
fraction::fraction(int n, int d) {
	numerator = n;
	denominator = d;
}
// Methods to update the fraction
void fraction::add(fraction f) {
	numerator = numerator * f.denominator + f.numerator * denominator;
	denominator = denominator * f.denominator;
	simplifier();
}
void fraction::mult(fraction f) {
	numerator = numerator * f.numerator;
	denominator = denominator * f.denominator;
	simplifier();
}
void fraction::div(fraction f) {
	if (denominator == 0 || f.denominator == 0 || f.numerator == 0) {
		throw "Division by zero condition!";
	}

	numerator = numerator * f.denominator;
	denominator = f.numerator * denominator;
	simplifier();
}
// Display method
void fraction::display(void) {
	cout << numerator << " / " << denominator << endl;
}

void fraction::simplifier(void) {
	for (int i = numerator; i > 0; i--) {
		if (denominator % i == 0 && numerator % i == 0) {
			numerator = numerator / i;
			denominator = denominator / i;
			break;
		}
	}
}
