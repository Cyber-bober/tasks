//var 3
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num = 10;
    for (num = 10; num < 100; num++) {
        int tens = num / 10;
        int units = num % 10; 
        if (abs(tens - units) <= 1) {
            cout << num << " ";
        }
    }
    return 0;
}