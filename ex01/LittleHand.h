/*
** LittleHand.h for LittleHand/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex01/LittleHand.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 14:14:32 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 14:15:58 2016 Marlon Petit
*/

#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include "FruitBox.h"
#include "Lemon.h"

class       LittleHand 
{
public:
  LittleHand();
  ~LittleHand();
  static void        sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes);
};

#endif
