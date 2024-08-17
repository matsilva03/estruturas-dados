#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#define ROW 3
#define COL 3

void maiorMenorMatriz() {
	int matriz[ROW][COL];
	int i, j;
	
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("Informe o %d° valor da %d° linha: ", j + 1, i + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int maior = matriz[0][0], menor = matriz[0][0];
	
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (matriz[i][j] > maior) {
				maior = matriz[i][j];
			}
			
			if (matriz[i][j] < menor) {
				menor = matriz[i][j];
			}
		}
	}
	
	printf("Maior número da matriz: %d\nMenor número da matriz: %d", maior, menor);
}

void jogoDaVelha() {
	
	char matriz[ROW][COL] = {{'!', '@', '#'}, {'$', '%', '¨'}, {'&', '*', '('}};
	int linha, coluna;
	int i, j;
	
	bool encerrado = 0;
	char simbolo = 'X';
	
	do {
		printf("Digite uma linha de 0 até %d (vez do %c): ", ROW, simbolo);
		scanf("%d", &linha);
		
		printf("Digite uma coluna 0 até %d (vez do %c): ", COL, simbolo);
		scanf("%d", &coluna);
	
		matriz[linha][coluna] = simbolo;
		
		if (simbolo == 'X') {
			simbolo = 'O';
		} else {
			simbolo = 'X';
		}
		
		printf("%c|%c|%c\n", matriz[0][0], matriz[0][1], matriz[0][2]);
		printf("-----\n");
		printf("%c|%c|%c\n", matriz[1][0], matriz[1][1], matriz[1][2]);
		printf("-----\n");
		printf("%c|%c|%c\n", matriz[2][0], matriz[2][1], matriz[2][2]);
		
		for (i = 0; i < ROW; i++) {
			if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
				printf("\n%c venceu!", simbolo);
				encerrado = 1;
				break;
			}
		}
		
		for (i = 0; i < COL; i++) {
			if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i]) {
				printf("\n%c venceu!", simbolo);
				encerrado = 1;
				break;
			}
		}
		
		if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) {
			printf("\n%c venceu!", simbolo);
			encerrado = 1;
		}
		
		if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]) {
			printf("\n%c venceu!", simbolo);
			encerrado = 1;
		}
		
		system("pause");
		system("cls");
		
	} while (encerrado == 0);
}

void notasTurma() {
	const int ALUNOS = 5, PROVAS = 4;
	
	int notas[ALUNOS][PROVAS], medias[ALUNOS], mediaTurma, soma;
	int i, j;
	
	for (i = 0; i < ALUNOS; i++) {
		soma = 0;
		
		for (j = 0; j < PROVAS; j++) {
			printf("Insira a %d° nota do %d° aluno: ", j + 1, i + 1);
			scanf("%d", &notas[i][j]);
			
			soma += notas[i][j];
		}
		
		medias[i] = soma / PROVAS;
	}
	
	soma = 0;
	
	for (i = 0; i < ALUNOS; i++) {
		soma += medias[i];
	}
	
	mediaTurma = soma / ALUNOS;
	
	system("cls");
	
	for (i = 0; i < ALUNOS; i++) {
		printf("A média do %d° aluno é: %d\n", i + 1, medias[i]);
	}
	
	printf("\nA média da turma é: %d\n", mediaTurma);	
}

void centroMeteorologico() {
	const int QUANT_CIDADES = 7;
	const int QUANT_MESES = 6;
	const char MESES[][6] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun"};
	
	int indicePluviometrico[QUANT_CIDADES][QUANT_MESES];
	
	int i, j, soma, pluvMediaCidade, pluvMediaRegiao;
	
	for (i = 0; i < QUANT_CIDADES; i++) {
		soma = 0;
		
		for (j = 0; j < QUANT_MESES; j++) {
			printf("Insira o índice pluviométrico da %d° cidade no mês de %s: ", i + 1, MESES[j]);
			scanf("%d", indicePluviometrico[i][j]);	
		
			soma += indicePluviometrico[i][j];
		}
		
		pluvMediaCidade = soma / QUANT_MESES;
		
		system("cls");
	}
	
	
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
//	maiorMenorMatriz();
//	jogoDaVelha();
//	notasTurma();
	centroMeteorologico();
	
	return 0;
}
