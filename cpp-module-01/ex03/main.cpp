#include "main.h"

int main()
{
  Weapon club = Weapon("0");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("1");
  bob.attack();

  // Weapon clubb = Weapon("crude spiked club");
  // HumanB jim("Jim");
  // jim.setWeapon(clubb);
  // jim.attack();
  // clubb.setType("some other type of club");
  // jim.attack();
  return 0;
}