#include <stdio.h>
#include <locale.h>
struct lapis {
	int dureza;
	char fabricante;
	int numero;
};

main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	int i;
	struct lapis p[3];
	for (i=0; i<3; i++) {
		printf("Informe a dureza do lápis %d: ", i+1);
		scanf("%d", &p[i].dureza);
		printf("Informe o fabricante do lápis %d: ", i+1);
		scanf("%s", &p[i].fabricante);
		printf("Informe o número do lápis %d: ", i+1);
		scanf("%d", &p[i].numero);
	}
	printf("\nDureza  Fabricante      Numero\n");
	for (i=0; i<3; i++){
		printf("%d\t%s\t\t%d\n", p[i].dureza, p[i].fabricante, p[i].numero);
	}
}
