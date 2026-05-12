#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    // Пример 1: Инициализация
    int arr1[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    for (int i = 0; i < 10; i++) 
        cout << "Массив_1[" << i << "]=" << arr1[i] << endl;
    cout << "\n\n";

    // Пример 2: Вычисленные значения
    vector<double> z(8);
    for (int i = 0; i < z.size(); i++) {
        z[i] = pow(0.5, i);
        cout << "z[" << i << "]=" << z[i] << endl;
    }
    cout << "\n";

    // Пример 4: Random и Sort
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(20, 50);

    vector<int> mas(15);
    for (int& x : mas) x = dist(gen);
    
    sort(mas.begin(), mas.end()); // Аналог Array::Sort
    cout << "Сортированный массив случайных чисел: ";
    for (int x : mas) cout << x << " ";
    cout << "\n";

    return 0;
}