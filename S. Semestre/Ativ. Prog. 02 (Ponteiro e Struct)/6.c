#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

typedef struct{
	char nome[20];
	int codigo;
	float preco;
}Produto;

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	int i, codConsulta;
	Produto p[qtd];
	
	
	for (i=0; i<qtd; i++){
		printf(" ---- Cadastro de Produtos ---- \n");
		printf("\t%dº produto\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s", &p[i].nome);
		printf("Código: ");
		scanf("%d", &p[i].codigo);
		printf("Valor: ");
		scanf("%f", &p[i].preco);
		system("cls");
	}
	
	system("cls");
	
	printf("\t\t---- Lista de Produtos ----\n\n");
	printf("\tPRODUTO\t\tCÓDIGO\n");
	for (i=0; i<qtd; i++){
		printf("\t%s\t\t%d\n", p[i].nome, p[i].codigo);
	}
	printf("\nDigite o código para o produto que quer consultar\n");
	printf("> ");
	scanf("%d", &codConsulta);
	
	printf("\n-----------------------------------\n");
	for (i=0; i<qtd; i++){
		if(codConsulta==p[i].codigo){
			printf("\n\tPRODUTO\t\tCÓDIGO\t\tVALOR\n");
			printf("\t%s\t\t%d\t\t%.2f", p[i].nome, p[i].codigo, p[i].preco);
		}
	}
	
}
