#include "Building.hpp"

size_t		Building::getPrice(size_t nbToBS, bool Buy)
{
  size_t	total_price = 0;
  float		actual_base_cost = this->buy_cost;

  if (Buy)
    for (int i = 0; i < nb; i++)
    {
      total_price += actual_base_cost;
      actual_base_cost *= 1.2;
    }
  else
    for (int i = 0; i < nb; i++)
    {
      total_price += actual_base_cost / 2.4;
      actual_base_cost / 1.2;
    }
  return (total_price);
}

int		Building::buy(size_t nbToBuy, size_t &PotatoStack)
{
  size_t	total_price = 0;
  float		actual_base_cost = this->buy_cost;

  for (int i = 0; i < nbToBuy; i++)
  {
    total_price += actual_base_cost;
    actual_base_cost *= 1.2;
  }

  if (PotatoStack < total_price)
    return (1);

  this->buy_cost = actual_base_cost;
  PotatoStack -= total_price;
  this->nb += nbToBuy;

  return (0);
}

int		Building::sell(size_t nbToSell, size_t &PotatoStack)
{
  size_t	total_price = 0;
  float		actual_base_cost = this->buy_cost;

  if (this->nb < nbToSell)
    return (1);

  for (int i = 0; i < nb; i++)
  {
    total_price += actual_base_cost / 2.4;
    actual_base_cost / 1.2;
  }

  this->buy_cost = actual_base_cost;
  PotatoStack += total_price;
  this->nb += nbToSell;

  return (0);
}
