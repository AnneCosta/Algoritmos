#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
int main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	int M[3][4], MT[4][3], i, j, aux;
	for(i=0; i<3; i++) {
		printf("--- Preenchendo a %d° linha ---\n",i+1);
		for (j=0; j<4; j++) {
			printf("Informe o %d° valor: ", j+1);
			scanf("%d", &M[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf(" ----  Matriz Original  ---- \n");
	for(i=0; i<3; i++) {
		for (j=0; j<4; j++) {
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
	for (i=0; i<4; i++) {
		for (j=0; j<3; j++) {
			MT[i][j]=M[j][i];
		}
	}
	printf("\n");
	printf(" ----  Matriz Transposta  ---- \n");
	for (i=0; i<4; i++) {
		for (j=0; j<3; j++) {
			printf("%d\t", MT[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
