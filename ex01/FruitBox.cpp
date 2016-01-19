/*
** FruitBox.cpp for FruitBox/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex00/FruitBox.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 14:03:49 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 14:06:33 2016 Marlon Petit
*/

#include <iostream>
#include "Fruit.h"
#include "FruitBox.h"

FruitBox::FruitBox(int size) 
{
  this->maxSize = size;
  this->first = NULL;
  this->cur = NULL;
}

FruitBox::~FruitBox() 
{}

int                 FruitBox::nbFruits() 
{
  int             i;
  FruitNode       *tmp;
  
  i = 0;
  tmp = this->first;
  while (tmp != NULL)
    {
      i++;
      tmp = tmp->next;
    }
  return (i);
}

FruitNode*          FruitBox::head()
{
  return (this->first);
}

Fruit*              FruitBox::pickFruit() 
{
  if (this->first)
    {
      Fruit* tmp = this->first->cur_Fru;
      this->first = this->first->next;
      return (tmp);
    }
  else
    {
      return (NULL);
    }
}

bool                FruitBox::putFruit(Fruit *newfruit) 
{
  if (newfruit == NULL)
    return (false);
  else if (this->nbFruits() >= this->maxSize) 
    return (false);
  else if (!this->first) 
    {
      this->first = new FruitNode();
      this->first->cur_Fru = newfruit;
      this->first->next = NULL;
      this->cur = this->first;
      return (true);
    } 
  else 
    {
      FruitNode*  tmp;

      tmp = this->first;
      if (tmp->cur_Fru == newfruit)
	return (false);
      while (tmp->next != NULL)
	{
	  if (tmp->cur_Fru == newfruit)
	    return (false);
	  tmp = tmp->next;
	}
      FruitNode*  tmp2;

      tmp2 = new FruitNode();
      tmp2->cur_Fru = newfruit;
      tmp2->next = NULL;
      tmp->next = tmp2;
      return (true);
    }
}
