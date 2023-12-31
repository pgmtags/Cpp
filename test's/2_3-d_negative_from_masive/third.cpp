/*
Написати програму, яка виводить послідовність з 10 рандомних числе в діапазоні(-100, 100), виводить індекс 3-ого від'ємного
*/

#include <iostream>
#include <random>
#include <conio.h>

using namespace std;

const int ARRAY_SIZE = 10;
const int MIN_VALUE = -100;
const int MAX_VALUE = 100;
int randomDigits[ARRAY_SIZE] = {};

int main() {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    // Генерація 10 рандомних чисел
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomDigits[i] = distribution(generator);
        cout << randomDigits[i] << ", ";
    }

    cout << endl << "Third negative symbol is: " << randomDigits[ARRAY_SIZE - 3];
    _getch();
}