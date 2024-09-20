#include <stdio.h>

int main() {
	int i, j, *p, *q;

	p = i; // ilegal
	q = &j;
	p = &*&i;
	i = (*&)j; // ilegal
	i = *&j;
	i = *&*&j;
	q = *p; // ilegal
	i = (*p)++ + *q;
}
