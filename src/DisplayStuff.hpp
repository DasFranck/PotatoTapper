#ifndef DISPLAYSTUFF_HPP_
# define DISPLAYSTUFF_HPP_

# include <string>
# include <SFML/Graphics.hpp>
# include "PotatoGuy.hpp"

/* # define DEBUG
# ifdef DEBUG
#  define DEBPRNT(x) std::cout << "DEBUG: " << x << std::endl;
# endif
# ifndef DEBUG
#  define DEBPRINT(x) (void) x;
# endif
*/

// Main Windows Size
# define WV_SIZE 600
# define WH_SIZE 800

// Class with Display Things
class DisplayStuff
{
  public:
    DisplayStuff();
    ~DisplayStuff() {}
  public:
    void		display(PotatoGuy &);
  public:
    sf::RenderWindow	window;
    sf::Font		font;
    sf::Text		text;
};

#endif /* !DISPLAYSTUFF_HPP_ */
