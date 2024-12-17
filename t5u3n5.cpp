#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double s = 0;
	double a = 1.0;
	int i = 2;

	double e;

	cout << "e = "; cin >> e;

	while (abs(a)>= e) {
		s += a;
		i++;
		a *= 5.0/((i+1)*(i-1));

	}
	cout << s;
	return 0;
}
