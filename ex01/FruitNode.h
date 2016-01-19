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
