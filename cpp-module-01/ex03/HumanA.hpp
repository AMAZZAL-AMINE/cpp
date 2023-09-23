#ifndef HUMANA_HPP
#define  HUMANA_HPP

#include "main.h"

class HumanA {
  private :
    std::string name;
    Weapon  weapn;
  public :
    HumanA(std::string name, Weapon  weapn);
    void attack();
};
#endif