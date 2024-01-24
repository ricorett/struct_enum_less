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

  new_Balance(bank_acc, newBalance);

  return 0;
}