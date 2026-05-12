#include <iostream>
#include <random>

using namespace std;

int main() {
    const int size = 12;
    const int var = 14;
    vector<int> arr(size);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-10 - var, 10 + var); // [-24; 24]

    cout << "Программа выполняет обработку массива из 12 целых чисел, а именно: ";
    cout << "Найти значение и номер минимального из элементов массива, расположенных между первым и последним нулевыми элементами. ";
    cout << "Массив из 12 целых чисел в диапазоне [-24; 24]." << endl;

    cout << "\nИсполнитель: Новиков Д. А." << endl;
    cout << "Вариант: №14" << endl;

    cout << "\nМассив: ";
    for (int& x : arr) {
        x = dist(gen);
        cout << x << " ";
    }
    cout << "\n\n";

    int firstZero = -1, lastZero = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            if (firstZero == -1) firstZero = i;
            lastZero = i;
        }
    }

    if (firstZero != -1 && lastZero != -1 && firstZero < lastZero - 1) {
        int minVal = arr[firstZero + 1];
        int minIdx = firstZero + 1;

        for (int i = firstZero + 1; i < lastZero; i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
                minIdx = i;
            }
        }
        cout << "Результат: Min = " << minVal << " на позиции " << minIdx << "\n";
    } else {
        cout << "Нулевые элементы не найдены или между ними нет чисел.\n";
    }

    return 0;
}