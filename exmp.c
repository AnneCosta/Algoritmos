#include <stdio.h>
struct lapis {
	int dureza;
	char fabricante;
	int numero;
};

main() {
	int i;
	struct lapis p[3];
	p[0].dureza=2;
	p[0].fabricante='F';
	p[0].numero=482;
	p[1].dureza=0;
	p[1].fabricante='G';
	p[1].numero=33;
	p[2].dureza=3;
	p[2].fabricante='E';
	p[2].numero=107;
	printf("Dureza   Fabricante   Numero\n");
	for (i=0; i<3; i++){
		printf("%d\t%c\t\t%d\n", p[i].dureza, p[i].fabricante, p[i].numero);
	}
}
