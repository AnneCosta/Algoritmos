#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu () {
	setlocale(LC_ALL,"portuguese_Brazil");
	int r;
	printf("-------------------\n");
	printf("1 - SOMA\n");
	printf("2 - SUBTRAÇÃO\n");
	printf("3 - MULTIPLICAÇÃO\n");
	printf("4 - DIVISÃO\n");
	printf("5 - SAIR\n");
	printf("-------------------\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

void soma (int x, int y) {
	printf("%d+%d: %d\n", x, y, x+y);
}

void subtracao (int x, int y) {
	printf("%d-%d: %d\n", x, y, x-y);
}

void multiplicacao (int x, int y) {
	printf("%d*%d: %d\n", x, y, x*y);
}

void divisao (int x, int y) {
	while (y==0){
		printf ("Não é permitido divisão por zero. Digite outro valor: ");
		scanf("%d", &y);
	}
	printf("%d/%d: %d\n", x, y, x/y);
}

main () {
	int r, a, b;
	printf("CALCULADORA\n\n");
	r=menu();
	while (r!=5) {
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	system("cls");
	printf("CALCULADORA\n\n");
	if (r==1) soma (a,b);
	if (r==2) subtracao (a,b);
	if (r==3) multiplicacao (a,b);
	if (r==4) divisao (a,b);
	r=menu();
	}
}
