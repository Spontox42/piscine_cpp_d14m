/*
** Fruit.cpp for Fruit/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex00/Fruit.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 09:44:19 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 09:51:18 2016 Marlon Petit
*/

#include "Fruit.h"

Fruit::Fruit()
{
  this->_name = "";
  this->_vitamins = 0;
}

Fruit::~Fruit()
{}

Fruit&	Fruit::operator=(Fruit const& f)
{
  this->_name = f._name;
  this->_vitamins = f._vitamins;
  return (*this);
}

std::string	Fruit::getName()
{
  return (this->_name);
}

int	Fruit::getVitamins()
{
  return (this->_vitamins);
}
