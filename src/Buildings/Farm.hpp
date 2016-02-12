//
// Farm.hpp for Buildings in /home/dasfranck/Prog/git/dasgit/PotatoTapper/src/Buildings
// 
// Made by Franck Hochstaetter
// Login   <hochst_a@epitech.net>
// 
// Started on  ven. févr. 12 13:26:37 2016 Franck Hochstaetter
// Last update ven. févr. 12 15:49:00 2016 Franck Hochstaetter
//

#ifndef FARM_HPP_
# define FARM_HPP_

# include "Building.hpp"

class Farm : public Building
{
  public:
    Farm() : Building(100, 1) {}
    ~Farm() {}
};

#endif /* !FARM_HPP_ */
