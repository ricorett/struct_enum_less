#include "header.hpp"

int main() {
  bankDb bank_acc;
  double newBalance;

  std::cout << "Введите номер счета: ";
  std::cin >> bank_acc.id;
  std::cout << "Введите имя владельца: ";
  std::cin >> bank_acc.name;
  std::cout << "Введите введите баланс: ";
  std::cin >> bank_acc.balance;
  std::cout << "Введите введите новый баланс: ";
  std::cin >> newBalance;
  new_Balance(bank_acc, newBalance);

  return 0;
}
void new_Balance(bankDb bank_acc, double &newBalance) {
  bank_acc.balance = newBalance;
  
  std::cout << "Ваш счёт: " << bank_acc.name << ", " << bank_acc.id << ", "
            << bank_acc.balance << std::endl;
}