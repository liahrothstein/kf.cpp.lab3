#include <iostream>
#include <random>

using namespace std;

int main() {
    const int rows = 8, cols = 10, var = 14;
    int matrix[rows][cols];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-10 - var, 10 + var);

    cout << "Программа выполняет обработку массива из 12 целых чисел, а именно: ";
    cout << "Определить произведение элементов в тех строках, которые не содержат отрицательных элементов. ";
    cout << "Массив из 12 целых чисел в диапазоне [-24; 24]." << endl;

    cout << "\nИсполнитель: Новиков Д. А." << endl;
    cout << "Вариант: №14" << endl;

    cout << "\nМатрица:" << endl;
    for (int i = 0; i < rows; i++) {
        bool hasNegative = false;
        long long product = 1;
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = dist(gen);
            cout << matrix[i][j] << "\t";
            if (matrix[i][j] < 0) hasNegative = true;
            product *= matrix[i][j];
        }

        if (!hasNegative) {
            cout << " | Произведение: " << product;
        } else {
            cout << " | Содержит отрицательные";
        }
        cout << endl;
    }

    return 0;
}