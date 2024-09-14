#include <stdio.h>

int main() {

	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;

	aloha[2] = value; // válido
	scanf("%f", &aloha); // inválido
	aloha = value; // inválido
	printf("%f", aloha); // inválido
	coisas[4][4] = aloha[3]; // válido
	coisas[5] = aloha; // inválido 
	pf = value; // inválido
	pf = aloha; // válido
}
