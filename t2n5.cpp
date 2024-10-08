#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b;
    cout << "Введите a и b";
    cin >> a;
    cin >> b;
    float x = cos(2 * a) + sin (a - 3);
    float y = cos(2 * b) + sin(b - 3);
    if (x < y) cout << x;
    else if (y < x) cout << y;
    return 0;
}