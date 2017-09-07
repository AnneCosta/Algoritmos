#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int exibematriz (int mat[][tam]) {
	int l, c;
	printf("\n   ---- Matriz ----\n\n");
	for (l=0; l<tam; l++) {
		for (c=0; c<tam; c++) {
			printf("   |%d| ", mat[l][c]);
		}
		printf("\n");
	}
}

int diagonalsec (int mat[][tam]) {
	int l, c, diagSec=0, diagSec1=1;
	for(l=0; l<tam; l++) {
		for(c=0; c<tam; c++) {
			if (c==(tam-1-l)) {
				diagSec=mat[l][c];
			}
		}
	}
	
	for(l=0; l<tam; l++) {
		for(c=0; c<tam; c++) {
			if (l+c==tam-1) {
				diagSec1*=mat[l][c];
			}
		}
	}
	printf("\n-----------------------\n");
	printf("O valor do produto dos elementos da DS é: %d", diagSec1);
}

main (){
	setlocale(LC_ALL,"portuguese_Brazil");
	int mat[tam][tam];
	int l, c, diagSec;
	for (l=0; l<tam; l++) {
		printf("Preenchendo a %d° linha\n", l+1);
		for (c=0; c<tam; c++) {
			printf("Informe o %d° valor: ", c+1);
			scanf("%d", &mat[l][c]);
		}
		system("cls");
	}
	
	exibematriz (mat);
	diagonalsec (mat);
}
