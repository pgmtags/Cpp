//11 варіант    

//Ввімкнення бібліотек
#include <iostream>
#include <cmath>

//Викорситання простору std
using namespace std;

//Головна функція
int main() {

//Ініціалізація змінних (int, float)
    int x, i;
    float S, e = 2.718;

    // Задання змінної
    cout << "Enter: "; // Вивід тексту у консоль
    cin >> x;  // Додати в змінну, те що ввід користувач у консолі

    // Цикл, поки i не буде равно число N, при кожній іттерації +1 до i
    for (i = 2; i <= 9; i++) {
        x += pow(e, -1*x) / i*i;
    }

    cout << "\nResult: " << x; // Вивід результату

    return 0;  // Закінчення програми
}