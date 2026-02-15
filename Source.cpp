#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main() {
    int number;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите число:" << endl;
    cin >> number;

    cout << "Вы ввели:" << endl;
    cout << number << endl;

    return EXIT_SUCCESS;

}
