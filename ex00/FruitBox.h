/*
** FruitBox.h for FruitBox/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex00/FruitBox.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 14:06:39 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 14:07:30 2016 Marlon Petit
*/

#ifndef FRUITBOX_H_
# define FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"

class       FruitBox 
{
public:
  FruitBox(int size);
  ~FruitBox();
  int             nbFruits();
  FruitNode*      head();
  Fruit*          pickFruit();
  bool            putFruit(Fruit *);

private:
  FruitNode       *cur;
  FruitNode       *first;
  int             maxSize;
};

#endif
