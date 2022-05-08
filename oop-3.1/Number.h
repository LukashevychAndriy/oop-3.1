#pragma once
#include "Number.h"
#include <iostream>

using namespace std;

class Number
{
private:
	float number;
public:
	Number();
	Number(const Number& r);
	Number(const float num);

	float getNumber() const { return number; };
	void setNumber(float num) { number = num; };

	friend Number operator + (const Number&, const Number&);
	friend Number operator * (const Number&, const Number&);

	operator string() const;
	friend ostream& operator << (ostream& out, const Number& r);
	friend istream& operator >> (istream& in, Number& r);
};
