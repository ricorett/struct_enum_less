#include "header.hpp"
#include <cmath>

int main() {
  int nInput = 1;


  while (nInput != 0) {
    input(nInput);
    switch (nInput) {
    case (kExit):
      exit(0);
      break;
    case (january):
      std::cout << "January" << std::endl;
      break;
    case (february):
      std::cout << "February" << std::endl;
      break;
    case (march):
      std::cout << "March" << std::endl;
      break;
    case (april):
      std::cout << "April" << std::endl;
      break;
    case (may):
      std::cout << "May" << std::endl;
      break;
    case (june):
      std::cout << "June" << std::endl;
      break;
    case (july):
      std::cout << "Jule" << std::endl;
      break;
    case (august):
      std::cout << "August" << std::endl;
      break;
    case (september):
      std::cout << "September" << std::endl;
      break;
    case (october):
      std::cout << "October" << std::endl;
      break;
    case (november):
      std::cout << "November" << std::endl;
      break;
    case (december):
      std::cout << "December" << std::endl;
      break;
    default:
      break;
    }
    if (nInput > 12) {
      std::cout << "Error, enter again." << std::endl;
    }
  }
  return 0;
}