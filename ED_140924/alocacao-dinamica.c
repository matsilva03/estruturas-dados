#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *p;
 p = (int *)malloc(sizeof(int));
 if (p == 0) //p == NULL ou !p
 {
  printf("ERRO: Memória insuficiente\n");
  return 1;
 }
 *p = 5;
 printf("%d\n", *p);
 printf("%p\n", p);
 free(p);
 return 0;
}
