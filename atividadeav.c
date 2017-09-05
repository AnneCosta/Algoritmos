#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int diagonalsec (int mat[][tam]) {
	int l, c, diagSec;
	for (l=0; l<tam; l++) {
		for (c=0; c<tam; c++) {
			if (c == (tam-1-l)) {
				diagSec=mat[l][c];
				if ((l+c)==(tam-1)) {	
					diagSec*=mat[l][c];	
				}
			}
		}
	}
	printf("%d", diagSec);
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
	}
	diagonalsec (mat);
}
