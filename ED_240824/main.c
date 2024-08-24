#include <stdio.h>
#include <locale.h>
#define ROW 3
#define COL 3
//void cumprimenta(char *, char *);
void lerMatriz(int (*)[ROW][COL]);
void maiorMenorElemento(int (*)[ROW][COL]);
void imprimeMatriz(int (*)[ROW][COL]);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
//	char primeiro, segundo;
//	printf("Entre com duas iniciais (sem separacao): ");
//	primeiro = getchar();
//	segundo = getchar();
//	cumprimenta(&primeiro, &segundo);
//	printf("Ola, %c%c!\n", primeiro, segundo);

	int matriz[ROW][COL];
	
	lerMatriz(&matriz);
	
	system("cls");
	
	maiorMenorElemento(&matriz);
	imprimeMatriz(&matriz);
	
	return 0;
}

//void cumprimenta(char *inic1, char *inic2) {
////	printf("Ola, %c%c!\n", *inic1, *inic2);
//	*inic1= 'c';
//	*inic2= 'd';
//}

void lerMatriz(int (*mat)[ROW][COL]) {
	int i, j;
	
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++){
			printf("Insira o %d° valor do %d° vetor: ", j + 1, i + 1);
			scanf("%d", &(*mat)[i][j]);
		}
	}
}

void maiorMenorElemento(int (*mat)[ROW][COL]) {
	int i, j;
	int maior = (*mat)[0][0], menor = (*mat)[0][0];
	
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if ((*mat)[i][j] > maior) {
				maior = (*mat)[i][j];
			}
			
			if ((*mat)[i][j] < menor) {
				menor = (*mat)[i][j];
			}
		}
	}
	
	printf("Maior número da matriz: %d\nMenor número da matriz: %d\n\n", maior, menor);
}

void imprimeMatriz(int (*mat)[ROW][COL]) {
	int i, j;
	
	for (i = 0; i < ROW; i++) {
		printf("[ ");
		for (j = 0; j < COL; j++){
			printf("%d ", (*mat)[i][j]);
		}
		printf("]\n");
	}
}
