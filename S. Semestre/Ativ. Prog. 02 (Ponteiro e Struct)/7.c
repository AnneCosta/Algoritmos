#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

typedef struct{
	char nome[50];
	char endereco[50];
	char telefone[20];
}Info;

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	int i, l, c;
	Info agenda[qtd];
	Info aux;
	
	for(i=0; i<qtd; i++){
		printf("---- Cadastro de contatos ----\n");
		printf("Nome: ");
		scanf(" %[^\n]s", &agenda[i].nome);
		printf("Endereço: ");
		scanf(" %[^\n]s", &agenda[i].endereco);
		printf("Telefone: ");
		scanf(" %[^\n]s", &agenda[i].telefone);
		system("cls");
	}
	
	for(l=0; l<qtd; l++){
		for(c=l; c<qtd; c++){
			if(strcmp(agenda[l].nome,agenda[c].nome)>0){
				aux = agenda[l];
				agenda[l] = agenda[c];
				agenda[c] = aux;
			}
		}
	}
	
	printf("\t\t---- Contatos ----\n\n");
	for(i=0; i<qtd; i++){
		printf("\t%s\t\t%s\n\t\t%s\n\n", agenda[i].nome, agenda[i].endereco, agenda[i].telefone);
	}
}
