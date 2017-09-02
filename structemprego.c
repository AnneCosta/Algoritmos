#include <stdio.h>
#include <locale.h>
struct emprego{
	int matricula;
	char nome[50];
	float salario;
};

main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	int i;
	struct emprego em[5];
	for (i=0; i<5; i++) {
		printf("Informe a matrícula do %d° funcionário: ", i+1);
		scanf("%d", &em[i].matricula);
		printf("Informe o nome do %d° funcionário: ", i+1);
		scanf("%s", &em[i].nome);
		printf("Informe o salário do %d° funcionário: ", i+1);
		scanf("%f", &em[i].salario);
	}
	printf("\nMatrícula    Nome    Salário\n");
	for (i=0; i<5; i++){
		printf("%d\t\t%s\t%.2f\n", em[i].matricula, em[i].nome, em[i].salario);
	}
}
