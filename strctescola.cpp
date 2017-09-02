#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
struct aluno {
	char nome [80];
	int matricula;
	char end[100];
	char tel[20];
	float nota;
}a;

main() {
	setlocale(LC_ALL,"portuguese_Brazil");
	int cont;
	struct aluno al[6];
	for (cont=0; cont<6; cont++) {
		printf("Informe o nome do %d° aluno: ", cont+1);
		scanf("%s", &al[cont].nome);
		printf("Informe a matrícula do %d° aluno: ", cont+1);
		scanf("%d", &al[cont].matricula);
		printf("Informe o endereço do %d° aluno: ", cont+1);
		scanf("%s", &al[cont].end);
		printf("Informe o telefone do %d° aluno: ", cont+1);
		scanf("%s", &al[cont].tel);
		printf("Informe a nota do %d° aluno: ", cont+1);
		scanf("%f", &al[cont].nota);
		system("cls");
	}
	printf("\nNome    Matrícula    Endereço  Telefone  Nota\n");
	for (cont=0; cont<5; cont++){
		printf("%s\t\t%d\t%s\t%s\t%.1f\n", al[cont].nome, al[cont].matricula, al[cont].end, al[cont].tel, al[cont].nota);
	}
}
