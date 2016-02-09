//
// DisplayStuff.hpp for src in /home/dasfranck/Progit/NoGit/PotatoTapper/src
// 
// Made by Franck Hochstaetter
// Login   <hochst_a@epitech.net>
// 
// Started on  Fri Feb 05 11:19:43 2016 Franck Hochstaetter
// Last update Fri Feb 05 12:35:54 2016 Franck Hochstaetter
//

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
