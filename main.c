#include <stdio.h>
#include "ptr.h"


int main(void)
{
  const int MAX_NODE = 2;
  struct node nyado[MAX_NODE];
  int count;

  for(count = 0; count < MAX_NODE; count++){
    nyado[count].name[30] = "m";
    nyado[count].quantity = 10;
    nyado[count].cost = 100;
    /*
    scanf("%s",nyado[count].name[30]);
    scanf("%d",nyado[count].quantity);
    scanf("%d",nyado[count].cost);
    */
  }

	ptr_func(&count,nyado);
	return 0;
}

int ptr_func(int *i, struct node *name){
  return 0;
}
