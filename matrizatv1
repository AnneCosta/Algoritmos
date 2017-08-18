#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"portuguese_Brazil");
	int m[3][3], linha, coluna, menor;
	for(linha=0; linha<3;linha++) {
		printf("---- Linha %d ----", linha+1);
		for(coluna=0; coluna<3; coluna++) {
			printf("\nInforme a coluna %d: ", coluna+1);
			scanf("%d", &m[linha][coluna]);
		}
	}
	for(linha=0; linha<3; linha++) {
		for(coluna=0; coluna<0; coluna++) {
			if(menor>m[linha][coluna]) {
				menor=m[linha][coluna];
			}
		}
	}
	printf("\nO menor valor é: %d", menor);
}
