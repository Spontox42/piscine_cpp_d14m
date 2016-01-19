/*
** main.cpp for main/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d14m/ex00/main.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 19 09:56:01 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 09:59:10 2016 Marlon Petit
*/

#include "Banana.h"
#include "Lemon.h"

int main(void)
{
  Lemon l;
  Banana b;
  std::cout << l.getVitamins() << std::endl;
  std::cout << b.getVitamins() << std::endl;
  std::cout << l.getName() << std::endl;
  std::cout << b.getName() << std::endl;
  Fruit& f = l;
  std::cout << f.getVitamins() << std::endl;
  std::cout << f.getName() << std::endl;
  return 1337;
  }
