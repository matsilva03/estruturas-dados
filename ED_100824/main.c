#include <stdio.h>
#include <locale.h>
#define LEN 5


int recebeValores() {
	int v[LEN];
	int i = 0;
	
	system("cls");
	
	do {
		fflush(stdin);
		printf("Digite o %d° número: ", i + 1);
		scanf("%d", &v[i]);
		i++;
	} while(i < LEN);
	
	for (i = LEN - 1; i >= 0; i--) {
		printf("%d ", v[i]);
	}
	
	char c;
	
	fflush(stdin);
	printf("\n\nGostaria de refazer? (y/n): ");
	scanf("%c", &c);
	
	switch(c) {
		case 'y':
			return 1;
			break;
		case 'n':
			return 0;
			break;
		default:
			return 0;
			break;
	}
}

int inverteVetor() {
	
	int v[LEN], aux1, aux2;
	int i = 0, j;
	system("cls");
	
	do {
		printf("Digite o %d° número: ", i + 1);
		scanf("%d", &v[i]);
		fflush(stdin);
		i++;
	} while(i < LEN);
	
	for (i = 0; i < LEN/2; i++){
		aux1 = v[i];
		aux2 = v[LEN - (i + 1)];
		
		v[i] = aux2;
		v[LEN - (i + 1)] = aux1;
	}
	
	for (i = 0; i < LEN; i++) {
		printf("%d ", v[i]);
	}
	
	char c;
	
	fflush(stdin);
	printf("\n\nGostaria de refazer? (y/n): ");
	scanf("%c", &c);
	
	switch(c) {
		case 'y':
			return 1;
			break;
		case 'n':
			return 0;
			break;
		default:
			return 0;
			break;
	}
}

int maiorMenor() {
	
	int v[LEN], maior, menor;
	int i = 0;
	
	system("cls");
	
	do {
		printf("Digite o %d° número: ", i + 1);
		scanf("%d", &v[i]);
		fflush(stdin);
		i++;
	} while(i < LEN);
	
	maior = v[0];
	menor = v[0];
	
	for(i = 0; i < LEN; i++){
		if(v[i] > maior){
			maior = v[i];
		}
		
		if(v[i] < menor){
			menor = v[i];
		}
	}
	
	printf("O menor valor é: %d\n", menor);
	printf("O maior valor é: %d\n", maior);
	
	char c;
	
	fflush(stdin);
	printf("\n\nGostaria de refazer? (y/n): ");
	scanf("%c", &c);
	
	switch(c) {
		case 'y':
			return 1;
			break;
		case 'n':
			return 0;
			break;
		default:
			return 0;
			break;
	}
}

int main() {
	
	setlocale(LC_ALL, "portuguese");
	int b;

	do{
//		b = recebeValores();
//		b = inverteVetor();
		b = maiorMenor();
	}while(b == 1);

	return 0;
}
