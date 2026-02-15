#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string word;

    std::cout << "Введите слово:" << std::endl;
    std::cin >> word;

    std::cout << "Вы ввели:" << std::endl;
    std::cout << word << std::endl;

    return 0;
}



