#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    setlocale(0, "");
    double x, y;
    cout << "введите x и y";
    cin >> x >> y;
    double answer =(1+sin(sqrt(x+1)))/(cos((12*y)-4));
    cout << "answer = " << fixed << setprecision(2) << answer;
    return 0;
}