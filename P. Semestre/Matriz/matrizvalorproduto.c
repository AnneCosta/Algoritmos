#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int M[6][6], N[6][6], P[6][6], l, c;
	
	for(l=0; l<6; l++){
		for(c=0; c<6; c++) {
    		M[l][c]=1+rand()%25;
    		N[l][c]=1+rand()%15;
    	}
	}
	printf("---- Matriz 1 ----\n");
	for(l=0; l<6; l++) {
		for (c=0; c<6; c++) {
			printf("|%d|\t", M[l][c]);
		}
		printf("\n\n");
	}
	printf("---- Matriz 2 ----\n");
	for(l=0; l<6; l++) {
		for (c=0; c<6; c++) {
			printf("|%d|\t", N[l][c]);
		}
		printf("\n\n");
	}
	printf("---- Valor dos produtos ----\n");
	for(l=0; l<6; l++) {
		for(c=0; c<6; c++) {
			P[l][c]= M[l][c]*N[l][c];
			printf("|%d|\t", P[l][c]);
		}
	}
}
