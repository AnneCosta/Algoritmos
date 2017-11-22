#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	int N[20], aux, i=0, j=19;
	for(i=0; i<20; i++){
		printf("Preencha a %d° linha do vetor: ", i+1);
		scanf("%d", &N[i]);
	}
	printf("\n");
	for(i=0; i<10; i++){
		aux=N[i];
		N[i]=N[j];
		N[j]=aux;
		j--;
	}
	printf("--- Vetor Trocado ---\n");
	for(i=0; i<20; i++){
		printf("\t%d\n",N[i]);
	}
}
