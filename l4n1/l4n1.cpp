#include <iostream>
#include <cmath>
#include <Windows.h>

double f(double x) {
    return (1 + pow(x, 2) + pow(x, 4) + pow(x, 6)) / (1 + pow(x, 3) + pow(x, 5) + pow(x, 7));
}

int main() {
    setlocale(0, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double y;
    std::cout << "Введите значение y: ";
    std::cin >> y;
    if (std::cin.fail()) {
        std::cout << "Введите цифры ";
        return 1;
    }

    double P = 1.7 * f(0.25) + 2 * f(1 + y) / 6 - f(pow(y, 2) - 1);

    std::cout << "P = " << P << std::endl;

    return 0;
}
