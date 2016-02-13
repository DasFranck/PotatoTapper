#include <iostream>
#include "PotatoGuy.hpp"

PotatoGuy::PotatoGuy()
{
 this->PotatoStack = 0;
 this->LPB = 0;
}

void	PotatoGuy::buyBuilding(char idBuilding, size_t nb)
{
  switch (idBuilding)
  {
    case 1:
      std::cout << "Price : " << farm.buy_cost << std::endl;
      if (farm.buy(nb, this->PotatoStack))
        std::cout << "Ain't got enought money to but" << nb << " Farm!" << std::endl;
      else
        std::cout << "Buying " << nb << " Farm!"<< std::endl;
      break;

    default:
      break;
  }
}

int	PotatoGuy::getIncome()
{
  return (farm.nb * farm.ics);
}
