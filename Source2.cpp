#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string word;

    cout << "Введите слово:" << std::endl;
    cin >> word;

    cout << "Вы ввели:" << std::endl;
    cout << word << std::endl;

    return 0;
}


