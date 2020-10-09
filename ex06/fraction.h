#ifndef FRACTION_H
#define FRACTION_H
#pragma once
class fraction {
private:
	// Internal representation of a fraction as two integers
	int numerator;
	int denominator;
	void simplifier(void);
public:
	// Class constructor
	fraction(int n, int d);
	// Methods to update the fraction
	void add(fraction f);
	void mult(fraction f);
	void div(fraction f);
	// Display method
	void display(void);
};

#endif