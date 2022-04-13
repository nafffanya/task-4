﻿#include <iostream>

#include <Windows.h>

#include <cmath>

using namespace std;


double fact(int N) {

    if (N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль

    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем один

    else // Во всех остальных случаях
        return N * fact(N - 1); // делаем рекурсию.
}

int main() {

    double result = 0;//обнуляем переменную, которую будем использовать для счёта с помощью числового ряда

    int x;//вводим х - переменная для формулы

    int n;//вводим n - сколько раз мы будем суммировать элеменеты (блоки) числового ряда

    cout << "Enter n: ";  //тут вводим  наши переменные

    cin >> n;

    cout << "Enter x: ";

    cin >> x;

    double trueResult = (exp(x) + exp(-x)) / 2; //а сюда записывается результат, рассчитанный по формуле

    cout << "True result: " << trueResult << endl; //результат, полученный по формуле (не числовой ряд). См. 35 строчку

    for (int i = 0; i < n * 2; i += 2) {//тут идём с помощью i от 0 до n*2, потому что степени x (см. формулу) идут через 2 шага

        result += pow(x, i) / fact(i); //добавляем в наш результат один блок из числового ряда

    }

    cout << "Value obtained using a numerical series in n steps: " << result << endl; //значение, полученное с помощью числового ряда за n шагов

    system("pause");
}