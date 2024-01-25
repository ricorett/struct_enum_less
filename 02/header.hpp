#include <iostream>
#include <string>

struct bankDb {
  int id;
  std::string name;
  double balance;
};

void new_Balance(bankDb bank_acc, double &newBalance);