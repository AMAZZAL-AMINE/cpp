#include "main.h"

HumanB::HumanB(std::string name) {
  this->name = name;
}

void HumanB::attack() {
  std::cout << this->name << " attacks with their " << this->weapn->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapn) {
  this->weapn = &weapn;
}
