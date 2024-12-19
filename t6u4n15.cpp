#include <iostream>
using namespace std;

int main() {
    int n, k1, k2;

    cout << "Введите размерность n*n: ";
    cin >> n;

    cout << "Введите k1 и k2: ";
    cin >> k1 >> k2;

    // Динамический массив
    int** array = new int*[n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[n];
    }

    // Заполнение массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> array[i][j];
        }
    }

    // Массив для хранения произведений
    int* products = new int[n];

    // Вычисление произведений
    for (int j = 0; j < n; ++j) {
        int product = 1;
        for (int i = k1; i <= k2; ++i) {
            product *= array[i][j];
        }
        products[j] = product;
    }

    // Вывод произведений
    cout << "Произведения для каждого столбца от k1 до k2:" << endl;
    for (int j = 0; j < n; ++j) {
        cout << "Столбец " << j << ": " << products[j] << endl;
    }

    // Освобождение памяти
    for (int i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;
    delete[] products;

    return 0;
}