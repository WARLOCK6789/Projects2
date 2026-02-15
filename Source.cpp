#include <iostream>
using namespace std;

int main() {
    int number;
    setlocale (LC_ALL, "Rus");

    cout << "Введите число:" << endl;
    cin >> number;

    cout << "Вы ввели:" << endl;
    cout << number << endl;

    return EXIT_SUCCESS;
}