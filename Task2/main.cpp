#include <iostream>

struct account {
    int number;
    std::string name;
    double balance;
};

void changeBalance(struct account &acc, const int newBalnce) {
    acc.balance = newBalnce;
}

int main() {
    account a;
    int userNewBalance;
    std::cout << "Введите номер счета: "; std::cin >> a.number;
    std::cout << "Введите имя владельца: "; std::cin >> a.name;
    std::cout << "Введите баланс: "; std::cin >> a.balance;
    std::cout << "Введите новый баланс: "; std::cin >> userNewBalance;

    changeBalance(a, userNewBalance);

    std::cout << "Ваш счет: " << a.name << ", " << a.number << ", " << a.balance;
}