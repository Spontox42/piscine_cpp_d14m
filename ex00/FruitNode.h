/*
** FruitNode.h for piscine_cpp in /home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex00
** 
** Made by Marlon Petit
** Login   <petit_x@epitech.net>
** 
** Started on  Tue Jan 19 14:25:17 2016 Marlon Petit
** Last update Tue Jan 19 14:25:18 2016 Marlon Petit
*/

#ifndef FRUITNODE_H_
# define FRUITNODE_H_

#include "Fruit.h"
#include "FruitBox.h"

typedef struct FruitNode FruidNode;

struct          FruitNode {
  Fruit       *cur_Fru;
  FruitNode   *next;
};

#endif
