/*
** LittleHand.cpp for LittleHand/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex01/LittleHand.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 14:13:41 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 14:14:13 2016 Marlon Petit
*/

#include <iostream>
#include "LittleHand.h"
#include "Fruit.h"
#include "FruitNode.h"
#include "FruitBox.h"

LittleHand::LittleHand() 
{}

LittleHand::~LittleHand() 
{}

void            LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes) 
{
  FruitNode   *tmp;
  
  tmp = unsorted.head();
  while (tmp != NULL)
    {
      if (tmp->cur_Fru->getName() == "banana")
        {
	  if (bananas.putFruit(tmp->cur_Fru) == true)
            {
	      unsorted.pickFruit();
            }
        }
      if (tmp->cur_Fru->getName() == "lemon")
        {
	  if (lemons.putFruit(tmp->cur_Fru) == true)
            {
	      unsorted.pickFruit();
            }
        }
      if (tmp->cur_Fru->getName() == "lime")
        {
	  if (limes.putFruit(tmp->cur_Fru) == true)
            {
	      unsorted.pickFruit();
            }
        }
      tmp = tmp->next;
    }
}
