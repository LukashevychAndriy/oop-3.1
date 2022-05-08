#include "Number.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

Number::Number()
{
	setNumber(0);
}

Number::Number(float num)
{
	setNumber(num);
}

Number::Number(const Number& r)
{
	setNumber(r.getNumber());
}

Number::operator string () const
{
	stringstream ss;

	ss << " number = " << getNumber() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Number& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Number& f)
{
	float number;
	cout << "Input number:" << endl;
	cout << " x = "; in >> number;
	f.setNumber(number);
	return in;
}

Number operator + (const Number& first, const Number& second)
{
	Number newNumber(first.getNumber() + second.getNumber());
	return newNumber;
}

Number operator * (const Number& first, const Number& second)
{
	Number newNumber(first.getNumber() * second.getNumber());
	return newNumber;
}