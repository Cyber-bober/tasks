#include <iostream>
#include <cmath>
using namespace std;

const double eps = 1e-12;

/*вспомогательная функция: выводит значение функции в точке х или сообщение о том, что
функция не определена*/

void f(double x)
{
    if ((x < eps) || ((2*pow(x,5)-1) < eps))
        cout << "=Функция неопределена";
    else cout << log(abs(3*x)*sqrt(2*(pow(x,5))-1));
}

int main() //главная функция
{
    double a, b, h, x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;
    cout << "x\tf(x)\n";  //выводим заголовок таблицы и перебираем все яисла из отрезка с шагом h
    for (x = a; x - b < eps; x+= h){
        cout << x << "\t";  //выводим х
        f(x);  //выводим значение функции в точке х
        cout << endl;
    }
    return 0;
}
