#include <iostream>
#include <windows.h>

class Counter {
public:
    std::string sign;
    int firstnum = 0;
    void first();
    bool end();
    void plus();
    void minus();
    void print();
private:
    int num = 1;
};

void Counter::first() {
    if (sign == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> firstnum;
        num = firstnum;
    }
}

bool Counter::end() {
    if (sign == "х") {
        return false;
    } else {
        return true;
    }
}

void Counter::plus() {
    if (sign == "+") {
        num++;
    }
}

void Counter::minus() {
    if (sign == "-") {
        num--;
    }
}

void Counter::print() {
    if (sign == "=") {
        std::cout << num << std::endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Counter signs;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> signs.sign;
    signs.first();
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> signs.sign;
        signs.plus();
        signs.minus();
        signs.print();
    } while (signs.end());
}