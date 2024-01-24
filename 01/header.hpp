#include <iostream>
#include <string>

enum month {
  kExit,
  january,
  february,
  march,
  april,
  may,
  june,
  july,
  august,
  september,
  october,
  november,
  december
};

int input(int &nInput) {
  std::cout << "Input a number of month, intput 0 for exit: " << std::endl;
  std::cin >> nInput;
  return nInput;
}