#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int x, y;
    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    if (abs(x) < 40 || abs(y) < 40){
        cout << "Да";
    }
    else if (abs(x) < 40 || abs(y) < 40){
        cout << "На границе";
    }
    return 0;
}
