#include <iostream>

using namespace std;

double factorial(int num) {
    double result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

double sumOfFactorials(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    double result = sumOfFactorials(n);
    cout << "s: " << result << endl;
    return 0;
}