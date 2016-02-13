#include "DisplayStuff.hpp"

DisplayStuff::DisplayStuff()
{
  window.create(sf::VideoMode(WH_SIZE, WV_SIZE), "TEST-Fl");
  window.setVerticalSyncEnabled(true);          // V-Sync

  if (!font.loadFromFile("ressources/fonts/arial.ttf"))
    exit(1);

  text.setFont(font);
  text.setString("Hey Mate!");
  text.setCharacterSize(24);
}

void DisplayStuff::display(PotatoGuy &pg)
{
  sf::FloatRect textRect;

  window.clear(sf::Color::Black);

  text.setString(std::to_string(pg.PotatoStack) + (pg.PotatoStack == 1 ? " potato." : " potatoes.")  + "\n");
  textRect = text.getLocalBounds();
  text.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
  text.setPosition(sf::Vector2f(WH_SIZE/2.0f, textRect.height));
  window.draw(text);

  text.setString("tapped per seconds: " + std::to_string(pg.LPB) + "\n");
  textRect = text.getLocalBounds();
  text.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
  text.setPosition(sf::Vector2f(WH_SIZE/2.0f, textRect.height * 2));
  window.draw(text);

  text.setString("income per seconds: " + std::to_string(pg.getIncome()) + "\n");
  textRect = text.getLocalBounds();
  text.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
  text.setPosition(sf::Vector2f(WH_SIZE/2.0f, textRect.height * 3));
  window.draw(text);

  window.display();
}
