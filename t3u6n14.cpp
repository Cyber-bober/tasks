#include <iostream>
#include <cmath>
using namespace std;

const double eps = 1e-12;
double f(double x) {
    if (x<0)
    return 0,2*pow(x,2) - x - 0,1;
    else if (x > 0 && x != 0,1)
    return (pow(x, 2)/(x-0,1));
    else if (x = 0,1)
    return 0;
}

int main()
{
    double a, b, h, x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;
    cout << "x\tf(x)\n"; //заголовок таблицы. \t - табуляция \n - переход на строку
    for (x = a; x - b < eps; x += h)
        cout << x << "\t" << f(x) << endl;
    return 0;
}