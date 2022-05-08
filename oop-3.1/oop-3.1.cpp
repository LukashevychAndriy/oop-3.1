#include <iostream>
#include "Real.h"

int main()
{
    Number q, w(2), e(w);
    Real a, b(2.5), c(b);
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cin >> a;
    cout << a;

    cout << powReal(c, b) << endl;
    cout << logReal(b) << endl;

    cout << a + b << endl;
    cout << a * b << endl;
}
