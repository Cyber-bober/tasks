#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return cos(2*x) + sin(x - 3);
}

int main() {
    double a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    double value_a = f(a);
    double value_b = f(b);
    cout << "значение в точке А: " << value_a << endl;
    cout << "значение в точке B: " << value_b << endl;
    if (value_a < value_b) {
        cout << "в точке a значение меньше";
    } else {
        cout << "в точке b значение меньше";
    }
}
