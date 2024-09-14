#include <stdio.h>

int main() {
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;

	p == &i; // true
	*p - *q; // -2
	**&p; // 3 
	3 - *p/(*q) + 7; // 10

	return 0;
}
