#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *p, *q;

 p = (int *)malloc(sizeof(int));
 q = p;
 printf("%p %p\n", p, q);
 *p = 10;
 printf("%d\n", *q);
 *q = 20;
 printf("%d\n", *q);
}
