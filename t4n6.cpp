#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double b1 = 2, b;
    int n;
    cout << "n = "; cin >> n;
    for (int i = 2; i <= n; i++)
    {
        b = 0.5*((1/b1)+b1);
        b1 = b;
    }
    cout << "b" << n << " = " << b << endl;
    return 0;
}
