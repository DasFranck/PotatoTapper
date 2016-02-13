#ifndef BUILDING_HPP_
# define BUILDING_HPP_

# include <cstdlib>

class Building
{
  public:
    double	buy_cost;
    size_t	nb;
    size_t	ics;        //Income per second
  public:
    Building(size_t base_cost, size_t ics) : nb(0), buy_cost(base_cost), ics(ics) {}
    virtual ~Building() {}
    int		buy(size_t nbToBuy, size_t &PotatoStack);
    int		sell(size_t nbToBuy, size_t &PotatoStack);
    size_t	getPrice(size_t nbToBS, bool Buy);
};

#endif /* !BUILDING_HPP_ */
