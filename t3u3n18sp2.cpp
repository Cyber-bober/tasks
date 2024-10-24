//var 2 do while
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 10;
    do {
        int tens = num / 10;
        int units = num % 10;
        if (abs(tens - units) <= 1) {
            cout << num << " ";
        }
        num++;
    }
    while (num < 100);
    return 0;
}