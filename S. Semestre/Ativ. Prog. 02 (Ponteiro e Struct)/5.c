#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

typedef struct{
	char nome[10], sexo;
	float altura, peso;
	char cpf[11];
}Info;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int i;
	char cpfVerif[11];
	float imc;
	Info cadastro[qtd];
	
	for (i=0; i<qtd; i++){
		printf("--- %dº Cadastro ---\n", i+1);
		printf("Nome: ");
		scanf("%s", &cadastro[i].nome);
		printf("Sexo (F para feminino, M para masculino): ");
		scanf("%s", &cadastro[i].sexo);
		printf("Número do CPF: ");
		scanf("%s", &cadastro[i].cpf);
		printf("Altura: ");
		scanf("%f", &cadastro[i].altura);
		printf("Peso: ");
		scanf("%f", &cadastro[i].peso);
		system("cls");
	}
	
	printf("Informe o CPF para verificação: ");
	scanf("%s", &cpfVerif);
	
	for(i=0; i<qtd; i++){
		if (strcmp(cpfVerif,cadastro[i].cpf) == 0){
			imc = cadastro[i].peso / (cadastro[i].altura*cadastro[i].altura);
			printf("O IMC de %s é %.1f.", cadastro[i].nome, imc);
		}
	}
}
