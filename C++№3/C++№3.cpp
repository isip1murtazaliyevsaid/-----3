#include <iostream>
#include <locale>
using namespace std;

const int ROWS = 3;
const int COLS = 5;

int main() {
    setlocale(LC_ALL, "Russian");

    double массив[ROWS][COLS];

    cout << "Введите элементы массива (3 строки по 5 элементов каждая):\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            cin >> массив[i][j];
        }
    }

    cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        double сумма = 0.0;
        for (int j = 0; j < COLS; ++j) {
            сумма += массив[i][j];
        }
        cout << "Строка " << i + 1 << ": " << сумма / COLS << endl;
    }

    return 0;
}
