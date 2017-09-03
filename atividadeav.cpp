#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

void diagonalsec (float mat[][tam]) {
	int linha, coluna, mult;
	for (linha=0; linha<tam; linha++) {
		for (coluna=0; coluna<tam; coluna++) {
			if (coluna == (tam-1-linha)) {
				if ((linha+coluna)==(tam-1)) {
					mult *= mat [linha][coluna];
					printf("|%f|-|%f|", mat[linha][coluna]);	
				}
			}
		}
	}
}
main (){
	setlocale(LC_ALL,"portuguese_Brazil");
	float mat[tam][tam];
	int linha, coluna;
	for (linha=0; linha<tam; linha++) {
		printf("Preenchendo a %d° linha", linha+1);
		for (coluna=0; coluna<tam; coluna++) {
			printf("Informe o %d° valor: ", coluna+1);
			scanf("%f", mat[linha][coluna]);
		}
		system("cls");
	}
	
	for (linha=0; linha<tam; linha++) {
		for (coluna=0; coluna<tam; coluna++) {
			diagonalsec (mat);
		}
	}
}
