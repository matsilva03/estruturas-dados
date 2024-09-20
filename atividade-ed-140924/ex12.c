#include <stdio.h>

int main() {

	char x1[4];
	int x2[4];
	float x3[4];
	float x4[4];

	int i;

	for (i = 0; i < 4; i++) {
		printf("\n%p\n", &x1[i]);
		printf("%p\n", &x2[i]);
		printf("%p\n", &x3[i]);
		printf("%p\n", &x4[i]);
	}

	return 0;
}
