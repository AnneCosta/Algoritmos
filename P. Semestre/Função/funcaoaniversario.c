#include <stdio.h>
#include <locale.h>

int mes (int d, int m, int a){
	int meses;
	if(m==1) {
		printf("\nAniversário em %d de janeiro de %d.\n", d, a);
	}	
	else if(m==2) {
		printf("\nAniversário em %d de feveireiro de %d.\n", d, a);
	}
	else if (m==3) {
		printf("\nAniversário em %d de março de %d.\n", d, a);
	}
	else if(m==4) {
		printf("\nAniversário em %d de abril de %d.\n", d, a);
	}
	else if(m==5) {
		printf("\nAniversário em %d de maio de %d.\n", d, a);
	}
	else if(m==6) {
		printf("\nAniversário em %d de junho de %d.\n", d, a);
	}
	else if(m==7) {
		printf("\nAniversário em %d de julho de %d.\n", d, a);
	}
	else if(m==8) {
		printf("\nAniversário em %d de agosto de %d.\n", d, a);
	}
	else if(m==9) {
		printf("\nAniversário em %d de setembro de %d.\n", d, a);
	}
	else if(m==10) {
		printf("\nAniversário em %d de outubro de %d.\n", d, a);
	}
	else if(m==11) {
		printf("\nAniversário em %d de novembro de %d.\n", d, a);
	}
	else if(m==12) {
		printf("\nAniversário em %d de dezembro de %d.\n", d, a);
	}
	
}

main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int d, m, a, index;
	
	printf("Informe o dia do seu nascimento: ");
	scanf("%d", &d);
	printf("Informe o mês do seu nascimento: ");
	scanf("%d", &m);
	printf("Informe o ano do seu nascimento: ");
	scanf("%d", &a);
	
	mes(d, m, a);
}
	
