#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double b = 2;
    int n;
    cout << "n = "; cin >> n;
    for (int i = 2; i <= n; i++)
    {
        b = 0.5*(1/b+b);
        cout << "b" << i << " = " << b << endl;
    }
    return 0;
}
