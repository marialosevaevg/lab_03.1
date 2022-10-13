#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x;
    double y;
    double A;
    double B = 0.0;
    
    cout << "x = "; cin >> x;
    
    A = 2*(abs(x)*abs(x)*abs(x));
    
    // спосіб 1: розгалуження в скороченій формі
    if (x<=-0.1)
        B = 5*cos(18*x);
    
    if(-0.1<x && x<1.2)
        B = atan2(x+2, 5);
    
    if (x>=1.2)
        B = 1/tan(x)*x+18;
    
    y = A - B;
    
    cout << endl;
    cout << "1) y = " << y << endl;
    
    // спосіб 2: розгалуження в повній формі
    if (x<=-0.1)
        B = 5*cos(18*x);
    else
        if (x>=1.2)
            B = 1/tan(x)*x+18;
    
    y = A - B;
    cout << "2) y = " << y << endl;

}
