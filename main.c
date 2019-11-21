#include <stdio.h>
#include "ptr_str.h"

int main(void)
{
  const int MAX = 2;
  DATA_NODE nyado[MAX] = {0};
  int count;

	ptr_func(count,nyado,MAX);
  for(count = 0; count < MAX; count++)
    printf("name=%s count=%d price=%d\n",*nyado[count].name,nyado[count].quantity,nyado[count].cost);
	
  return 0;
}


