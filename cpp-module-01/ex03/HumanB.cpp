#include "main.h"


HumanB::HumanB(std::string name) {
  this->name = name;
}

void HumanB::setWeapon(Weapon& weapn) {
  this->weapn = &weapn;
}

void HumanB::attack() {
  std::cout << this->name << " attacks with his " << this->weapn->getType() << std::endl;
}
