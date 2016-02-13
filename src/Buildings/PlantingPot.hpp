#ifndef PLANTINGPOT_HPP_
# define PLANTINGPOT_HPP_

# include "Building.hpp"

class PlantingPot : public Building
{
  public:
    PlantingPot() : Building(150, 1) {}
    ~PlantingPot() {}
};

#endif /* !PLANTINGPOT_HPP_ */
