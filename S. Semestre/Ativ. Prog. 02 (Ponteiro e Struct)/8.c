#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

typedef struct{
	char nome[30], email[40];
	int dia, mes, ano;
	char observacao[80];
	char opcao;
}Pessoa;
typedef struct{
	int ddd;
	char numTel[10];
}Telefone;
typedef struct{
	char rua[30], complemento[20], bairro[30], cep[20], cidade[50], 
	estado[50], pais[40];
	int numeroCasa;
}Endereco;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int i, j; 
	Pessoa p[qtd];
	Telefone tel[qtd];
	Endereco end[qtd];
	Obs anot[qtd];
	
	printf("\t\t--- Preenchendo Agenda ---\n\n");
	for(i=0; i<qtd; i++){
		printf("Dados Pessoais\n\n");
		printf("Nome: "); scanf(" %[^\n]s", &p[i].nome);
		printf("Dia, mês e ano de nascimento: "); scanf("%d %d %d", &p[i].dia, &p[i].mes, &p[i].ano);
		printf("Telefone (DDD+Tel): "); scanf("%d %[^\n]s", &tel[i].ddd, &tel[i].numTel);
		printf("E-mail: "); scanf(" %[^\n]s", &p[i].email);
		system("cls");
		printf("Endereço\n\n");
		printf("Rua: "); scanf(" %[^\n]s", &end[i].rua);
		printf("Bairro: "); scanf(" %[^\n]s", &end[i].bairro);
		printf("Complemento: "); scanf(" %[^\n]s", &end[i].complemento);
		printf("Número: "); scanf("%d", &end[i].numeroCasa);
		printf("CEP: "); scanf(" %[^\n]s", &end[i].cep);
		printf("Cidade: "); scanf(" %[^\n]s", &end[i].cidade);
		printf("Estado: "); scanf(" %[^\n]s", &end[i].estado);
		printf("País: "); scanf(" %[^\n]s", &end[i].pais);
		system("cls");
		printf("Observações adicionais? (S para sim, N para não)\n\n> "); scanf("%s", &p[i].opcao);
		if (strcmp(p[i].opcao,'S')==0){
			printf("\n\n");
			scanf(" %[^\n]s", p[i].anotacoes);
		}
	}
	system("cls");
	
	printf("***************************************\n");
	for(i=0; i<qtd; i++){
		printf("\t--- Dados Pessoais ---\n");
		printf("%s\t%d/%d/%d\n", p[i].nome, p[i].dia, p[i].mes, p[i].ano);
		printf("\t(%d) %s\n", tel[i].ddd, tel[i].numTel);
		printf("\t%s\n", p[i].email);
		printf("\t--- Endereço ---\n");
		printf("\t%s\n\t%s\n", end[i].rua, end[i].bairro);
		printf("\t%s\n\t%d\n", end[i].complemento, end[i].numeroCasa);
		printf("\t%s\n\t%s\n", end[i].cep, end[i].cidade);
		printf("\t%s\n\t%s\n", end[i].estado, end[i].pais);
		printf("\t--- Observações ---\n");
		printf("\t%s\n\n", p[i].anotacoes);
	}
}
