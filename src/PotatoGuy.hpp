#ifndef POTATOGUY_HPP_
# define POTATOGUY_HPP_

# include <cstdlib>
# include "Buildings/Farm.hpp"

// Player's class
class PotatoGuy
{
  public:
    PotatoGuy();
    ~PotatoGuy() {}
    void buyBuilding(char idBuilding, size_t nb);
  public:
    size_t	PotatoStack;      // Potato number than the player have.
    size_t	LPB;              // Last second Potato Buffer.
    Farm	farm;
};

#endif /* !POTATOGUY_HPP_ */
