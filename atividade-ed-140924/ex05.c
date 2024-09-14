#include <stdio.h>

int main() {
	int i, j, *p, *q;

	p = i;
	q = &j;
	p = &*&i;
	i = (*&)j; // ilegal
	i = *&j;
	i = *&*&j;
	q = *p;
	i = (*p)++ + *q;
}
