#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

typedef struct{
	char nome[10];
	int matricula;
	float nota1, nota2;
}Cadastro;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int i;
	Cadastro al[qtd];
	
	for (i=0; i<qtd; i++){
		printf("Cadastro do %dº aluno\n", i+1);
		printf("-----------------\n");
		printf("Informe o nome: ");
		scanf("%s", &al[i].nome);
		printf("Informe a matrícula: ");
		scanf("%d", &al[i].matricula);
		printf("Informe a primeira nota: ");
		scanf("%f", &al[i].nota1);
		printf("Informe a segunda nota: ");
		scanf("%f", &al[i].nota2);
		printf("\n\n");
		system("cls");
	}
	
	for (i=0; i<qtd; i++){
		printf("Exibindo cadastro do %dº aluno\n", i+1);
		printf("--------------------\n");
		printf("Nome: %s\n", al[i].nome);
		printf("Matrícula: %d\n", al[i].matricula);
		printf("Média: %.2f\n", (al[i].nota1 + al[i].nota2)/2);
		printf("\n");
	}
	
}
