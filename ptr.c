#include<stdio.h>
#include"ptr.h"

int ptr_func(int i, DATA_NODE *nyado, const int MAX){

   
  static int a = 5;

  for(i = 0; i < MAX; i++){
    *nyado[i].name = "match";
    nyado[i].quantity = 10;
    nyado[i].cost = 100;
  }

  pk = &a;
  //pk(=a)のアドレス
  printf("*pk=%d,&pk=%p,a=%p\n",*pk,pk,&a);

  return 0;
}
