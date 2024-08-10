#include <stdio.h>
#include <locale.h>
#define LEN 5


int recebeValores() {
	int v[LEN];
	int i = 0;
	
	system("cls");
	
	do {
		printf("Digite o %d° número: ", i + 1);
		scanf("%d", &v[i]);
		fflush(stdin);
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

int main() {
	
	setlocale(LC_ALL, "portuguese");
	int b;
	
	do{
		b = recebeValores();
	}while(b == 1);

	return 0;
}
