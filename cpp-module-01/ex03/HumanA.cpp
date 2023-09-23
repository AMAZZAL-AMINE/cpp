#include "main.h"

HumanA::HumanA(std::string name, Weapon weapn)  : weapn(weapn)  {
  this->name = name;
}

void HumanA::attack() {
  std::cout << this->name << " attacks with their " << this->weapn.getType() << std::endl;
}
