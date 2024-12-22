#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    // Динамический массив
    int* array = new int[n];

    // Заполнение массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    // Подсчет нечетных чисел
    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            result++;
        }
    }

    // Создание нового массива для хранения нечетных чисел
    int* newArray = new int[result];
    int index = 0;

    // Копирование нечетных чисел в новый массив
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            newArray[index++] = array[i];
        }
    }

    // Вывод нового массива
    cout << "Массив без четных чисел:" << endl;
    for (int i = 0; i < result; ++i) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    // Освобождение памяти
    delete[] array;
    delete[] newArray;

    return 0;
}