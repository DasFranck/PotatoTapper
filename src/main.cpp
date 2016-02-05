#include <iostream>
#include "PotatoTapper.hpp"
#include "PotatoGuy.hpp"
#include "DisplayStuff.hpp"

int			main()
{
  int			PotatoBuffer = 0;        // Number of potato tapped in the current second
  int			ElapsedTime = 0;
  sf::Clock		clock;
  sf::Time		TimePlayed;
  sf::Time		LastTime;
  DisplayStuff		ds;
  PotatoGuy		pg;

  while (ds.window.isOpen())
  {
    sf::Event event;

    TimePlayed = clock.getElapsedTime();
    if (static_cast<int>(LastTime.asSeconds()) != static_cast<int>(TimePlayed.asSeconds()))
    {
      ElapsedTime = static_cast<int>((LastTime - TimePlayed).asSeconds());
      ElapsedTime = (ElapsedTime < 1 ? 1 : ElapsedTime);
      /*
      DEFPRINT("Tapped potatoes in the last second (" << static_cast<int>(LastTime.asSeconds()) <<  "): "
                << PotatoBuffer / ElapsedTime)
      */
      LastTime = TimePlayed;
      pg.LPB = PotatoBuffer;
      PotatoBuffer = 0;
    }

    while (ds.window.pollEvent(event))
    {
      switch (event.type)
      {
        case sf::Event::Closed:
          ds.window.close();
          break;

        case sf::Event::Resized:
          std::cout << "New Size : " << event.size.width << "*" << event.size.height << std::endl;
          break;

        case sf::Event::TextEntered:
          if ((event.text.unicode >= 'A' && event.text.unicode <= 'Z') ||
              (event.text.unicode >= 'a' && event.text.unicode <= 'z'))
            ++PotatoBuffer && ++pg.PotatoStack;
          break;
      }
    }

    ds.display(pg);
  }

  return (0);
}
