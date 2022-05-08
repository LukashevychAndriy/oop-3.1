#pragma once
#include "Number.h"
#include <iostream>

using namespace std;

class Real : public Number
{
public:
	Real();
	Real(const float num);
	Real(const Real& r);

	friend Real operator + (const Real&, const Real&);
	friend Real operator * (const Real&, const Real&);

	friend Real powReal(Real, Real);
	friend Real logReal(Real);

	operator string() const;
	friend ostream& operator << (ostream& out, const Real& r);
	friend istream& operator >> (istream& in, Real& r);
};

