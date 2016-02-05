#ifndef POTATOGUY_HPP_
# define POTATOGUY_HPP_

// Player's class
class PotatoGuy
{
  public:
    PotatoGuy() : PotatoStack(0), LPB(0) {}
    ~PotatoGuy() {}
  public:
    size_t	PotatoStack;      // Potato number than the player have.
    size_t	LPB;              // Last second Potato Buffer.
};

#endif /* !POTATOGUY_HPP_ */
