#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "n= ";
    cin >> n;

    if (n <= 0) {
        cout << "Количество чисел должно быть положительным.\n";
        return 1;
    }

    // Динамический массив
    int* numbers = new int[n];

    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    if (n == 0) {
        cout << "Последовательность пуста.\n";
        delete[] numbers; // Освобождаем память
        return 0;
    }

    // Поиск первого минимального элемента
    int minVal = numbers[0];
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (numbers[i] < minVal) {
            minVal = numbers[i];
            minIndex = i;
        }
    }

    // Поиск последнего максимального элемента
    int maxVal = numbers[0];
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (numbers[i] >= maxVal) {
            maxVal = numbers[i];
            maxIndex = i;
        }
    }

    if (minIndex == maxIndex) {
        cout << "Минимальный и максимальный элементы совпадают. Перестановка не требуется.\n";
        for (int i = 0; i < n; ++i) {
            cout << numbers[i] << " ";
        }
        cout << endl;
        delete[] numbers; // Освобождаем память
        return 0;
    }

    // Меняем местами первый минимальный и последний максимальный элементы
    int temp = numbers[minIndex];
    numbers[minIndex] = numbers[maxIndex];
    numbers[maxIndex] = temp;

    // Вывод измененной последовательности
    cout << "Измененная последовательность:\n";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete[] numbers; // Освобождаем память
    return 0;
}
