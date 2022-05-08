#include "Real.h"
#include <iostream>
#include <cmath>
#include <sstream>

Real::Real()
{
	setNumber(0);
}

Real::Real(float num)
{
	setNumber(num);
}

Real::Real(const Real& r)
{
	setNumber(r.getNumber());
}

Real::operator string () const
{
	stringstream ss;

	ss << " number = " << getNumber() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Real& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Real& f)
{
	float number;
	cout << "Input number:" << endl;
	cout << " x = "; in >> number;
	f.setNumber(number);
	return in;
}

Real operator + (const Real& first, const Real& second)
{
	Real newNumber(first.getNumber() + second.getNumber());
	return newNumber;
}

Real operator * (const Real& first, const Real& second)
{
	Real newNumber(first.getNumber() * second.getNumber());
	return newNumber;
}

Real powReal(Real real1, Real real2)
{
	Real newReal(pow(real1.getNumber(), real2.getNumber()));

	return newReal;
}

Real logReal(Real real)
{
	Real newReal(log(real.getNumber()));

	return newReal;
}
