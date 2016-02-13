#ifndef FARM_HPP_
# define FARM_HPP_

# include "Building.hpp"

class Farm : public Building
{
  public:
    Farm() : Building(1000, 10) {}
    ~Farm() {}
};

#endif /* !FARM_HPP_ */
