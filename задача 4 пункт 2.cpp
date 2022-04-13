#include <iostream>

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

    const double ACCURACY = 0.00000000001; //точность, до которой будет считаться числовой ряд

    cout << "Enter x: "; //тут вводим x

    cin >> x;

    double trueResult = (exp(x) + exp(-x)) / 2; //а сюда записывается результат, рассчитанный по формуле

    cout << "True result: " << trueResult << endl; //результат, полученный по формуле (не числовой ряд). См. 35 строчку

    for (int i = 0; pow(x, i) / fact(i) > ACCURACY; i += 2) {//этот цикл будет идти, пока значение (pow(x, i) / fact(i)) этой херни будет больше ACCURACY (то есть нашей точности, которую мы можем менять)

        result += pow(x, i) / fact(i); //добавляем в наш результат один блок из числового ряда

    }

    cout << "Result obtained by calculations with the accuracy of " << ACCURACY << ": " << result << endl; //Результат, полученный в результате расчетов с точностью ACCURACY

    system("pause");

}