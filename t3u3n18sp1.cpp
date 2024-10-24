//var  - while 
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num = 10; // Начинаем с первого двухзначного числа
    while (num < 100) {
        int tens = num / 10; // Старшая цифра
        int units = num % 10; // Младшая цифра
        if (abs(tens - units) <= 1) {
            cout << num << " ";
        }
        num++;
    }
    return 0;
}