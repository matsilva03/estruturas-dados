#include <stdio.h>

int main(){
	int vet[] = {4,9,13};
	int i;

	for(i=0;i<3;i++){
		printf("%d ",*(vet+i)); // imprime o valor contido no vetor vet com base na posição i
	}
}
