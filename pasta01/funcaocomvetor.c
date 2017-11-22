#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int menu () {
	setlocale(LC_ALL,"portuguese_Brazil");
	int r;
	printf("1 - MAIOR NÚMERO\n");
	printf("2 - MENOR NÚMERO\n");
	printf("3 - SOMA DOS VALORES\n");
	printf("4 - TODOS OS VALORES\n");
	printf("5 - SAIR\n");
	printf("-----------------\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d\n", &r);
	return r;
}
void maior (int v[]) {
	int x, y, aux;
	aux=v[0];
	for (x=1; x<10; x++) {
		if (v[x]>aux) aux=v[x];
	}
	printf("\nMaior valor do vetor: %d\n", aux);
}
void menor (int v[]) {
	int x, aux;
	aux=v[0];
	for (x=1; x<10; x++) {
		if (v[x]<aux) aux=v[x];
	}
	printf("\nMenor valor do vetor: %d\n", aux);
}
void soma (int v[]) {
	int x, soma=0;
	for (x=1; x<10; x++) {
		soma=soma+v[x];
	}
	printf("Soma: %d\n", soma);
}
void todos (int v[]) {
	int x;
	for (x=1; x<10; x++) {
		printf("|%d|\t\n", v[x]);
	}
}

main () {
	int v[10], x, y, r;
	printf("----- VETOR -----\n");
	r=menu();
	while (r!=5) {
	for(x=1; x<10; x++) {
		v[x]=1+rand()%15;
	}
	system("cls");
	printf("----- VETOR -----\n");
	if (r==1) maior(v);
	if (r==2) menor(v);
	if (r==3) soma(v);
	if (r==4) todos(v);
	r=menu();
	}
}
