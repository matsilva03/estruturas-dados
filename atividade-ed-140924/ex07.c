#include <stdio.h>

int main(void){
	float vet[5] = {1.1,2.2,3.3,4.4,5.5};
	float *f;
	int i;
	f = vet;
	printf("contador/valor/valor/endereco/endereco");

	for(i = 0 ; i <= 4 ; i++){
		printf("\ni = %d",i); // i = 0
				      // i = 1
				      // i = 2
				      // i = 3
				      // i = 4

		printf("vet[%d] = %.1f", i, vet[i]); // vet[0] = 1.1
						     // vet[1] = 2.2
						     // vet[2] = 3.3
						     // vet[3] = 4.4
						     // vet[4] = 5.5

		printf("*(f + %d) = %.1f", i, *(f+i)); // *(f + 0) = 1.1 
						       // *(f + 1) = 2.2
						       // *(f + 2) = 3.3
						       // *(f + 3) = 4.4
						       // *(f + 4) = 5.5

		// printf("&vet[%d] = %X",i, &vet[i]);
		printf("&vet[%d] = %p", i, &vet[i]); // &vet[0] = *endereço de vet na posição 0*
						     // &vet[1] = *endereço de vet na posição 1*
						     // &vet[2] = *endereço de vet na posição 2*
						     // &vet[3] = *endereço de vet na posição 3*
						     // &vet[4] = *endereço de vet na posição 4*
 
		// printf("(f + %d) = %X",i, f+i);
		printf("(f + %d) = %p", i, &vet[i]); // (f + 0) = *endereco de vet na posicao 0*
						     // (f + 1) = *endereco de vet na posicao 1*
						     // (f + 2) = *endereco de vet na posicao 2*
						     // (f + 3) = *endereco de vet na posicao 3*
						     // (f + 4) = *endereco de vet na posicao 4*
	}
}
