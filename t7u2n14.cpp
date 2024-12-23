#include <iostream>
#include <string>
using namespace std;

int main() {
    string  s, s0;

    cout << "Введите строку s: ";
    getline(cin, s); // Считываем строку с учетом пробелов
    cout << "Введите подстроку s0: ";
    getline(cin, s0);

    size_t pos; //Size_t - беззнаковый целочисленный тип
    while ((pos = s.find(s0)) != string::npos) {  //npos - проверка до конца строки
        s.erase(pos, s0.length();
    }
    cout << s;
  
    return 0;
}