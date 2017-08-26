#include <stdio.h>
#include <locale.h>
#define tam 10
int menu () {
	setlocale(LC_ALL,"portuguese_Brazil");
	int r;
	printf("----- VETOR -----\n");
	printf("1 - MAIOR NÚMERO\n");
	printf("2 - MENOR NÚMERO\n");
	printf("3 - SOMA DOS VALORES\n");
	printf("4 - TODOS OS VALORES\n");
	printf("5 - SAIR\n");
	printf("-----------------\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}
void maior (int v[]) {
	int x, y, aux;
	aux=v[0];
	for (x=1; x<tam; x++) {
		if (v[x]>aux) aux=v[x];
	}
	printf("\nMaior valor do vetor: %d\n\n", aux);
}
void menor (int v[]) {
	int x, y, aux;
	aux=v[0];
	for (x=1; x<tam; x++) {
		if (v[x]<aux) aux=v[x];
	}
	printf("\nMenor valor do vetor: %d\n\n", aux);
}
/*void soma (int x, int y) {

}
void todos (int x, int y) {

}*/

main () {
	int v[10], x, y, r;
	for (x=0; x<10; x++) {
	printf("Informe o valor %d do vetor 1: ", x+1);
	scanf("%d", &v[x]);
	if (r==1) maior(v);
	if (r==2) menor(v);
	}
}
