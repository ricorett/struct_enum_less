#include <iostream>
#include <string>

struct bankDb {
  int id;
  std::string name;
  double balance;
};

void new_Balance(bankDb &bank_acc, double &newBalance) {
  std::cout << "Введите введите новый баланс: ";
  std::cin >> newBalance;
  
  bank_acc.balance = newBalance;
  
  std::cout << "Ваш счёт: " << bank_acc.name << ", " << bank_acc.id << ", "
            << bank_acc.balance << std::endl;
}