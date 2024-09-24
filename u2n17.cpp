#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    double a;
    cout << 'введите а';
    cin >> a;
    double R = (sqrt(3*a)/3);
    cout << 'радиус равен' << fixed << setprecision(2) << R;
    return 0;
}