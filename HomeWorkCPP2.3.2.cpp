#include <iostream>
#include <windows.h>

class Counter {
public:
    std::string sign;
    void first();
    bool operation();
    void plus();
    void minus();
    void print();
private:
    int num = 1;
};

void Counter::first() {
    if (sign == "да") {
        int firstnum = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> firstnum;
        num = firstnum;
    }
}

bool Counter::operation() {
    if (sign == "+") {
        plus();
    }
    if (sign == "-") {
        minus();
    }
    if (sign == "=") {
        print();
    }
    if (sign == "х") {
        return false;
    } else {
        return true;
    }
}

void Counter::plus() {
    num++;
}

void Counter::minus() {
    num--;
}

void Counter::print() {
    std::cout << num << std::endl;
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
    } while (signs.operation());
}