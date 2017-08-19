#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int M[6][6], N[6][6], P[6][6], l, c;
	
	for(l=0; l<6; l++){
		for(c=0; c<6; c++) {
    		M[l][c]=10;
    		N[l][c]=6;
    	}
	}
	for(l=0; l<6; l++) {
		//printf("---- Linha %d ----\n", l+1);
		for (c=0; c<6; c++) {
			printf("|%d|\t", M[l][c]);
		}
		printf("\n");
	}
	
	for(l=0; l<6; l++) {
		//printf("---- Linha %d ----\n", l+1);
		for (c=0; c<6; c++) {
			printf("|%d|\t", N[l][c]);
		}
		printf("\n");
	}
	for(l=0; l<6; l++) {
		for(c=0; c<6; c++) {
			P[l][c]= M[l][c]*N[l][c];
			printf("\n\nO valor do %d° produto é: %d", c+1, P[l][c]);
		}
	}
}
