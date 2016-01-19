/*
** Fruit.h for Fruit/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex00/Fruit.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 09:44:24 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 09:59:24 2016 Marlon Petit
*/

#ifndef FRUIT_H_
# define FRUIT_H_

#include <iostream>
#include <string>

class		Fruit
{
public:
		Fruit();
  virtual	~Fruit();
  Fruit&	operator=(Fruit const&);
  std::string	_name;
  int		_vitamins;
  std::string	getName();
  int		getVitamins();
};

#endif /* !FRUIT_H_ */
