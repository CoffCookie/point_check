#include<stdio.h>
#include"ptr.h"
//#include "ptr_str.h"

int ptr_func(int i, DATA_NODE *nyado, const int MAX){

  for(i = 0; i < MAX; i++){
    *nyado[i].name = "match";
    nyado[i].quantity = 10;
    nyado[i].cost = 100;
  }
  return 0;
}
