#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define m 10

typedef struct{
	int n;
	char elem[m];
}Lista;

int menu(){
	int r;
	printf("--- EDITOR DE LISTA ---\n");
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Exibir\n");
	printf("4 - Acessar\n");
	printf("5 - Esvaziar\n");
	printf("6 - Sair\n");
	printf("\nDigite sua opção\n");
	printf("> ");
	scanf("%d", &r);
	printf("\n");
	return r;
}

void iniciaLista (Lista *L){
	L->n=0;
}


void inserirFinal (Lista *L, char dado){
	if (L->n > m-1){
		printf("Lista cheia.\n");
	}
	else {
		L->elem[L->n]=dado;
		L->n++;
	}
}

void exibir(Lista *L){
	int i;
	if(L->n == 0){
		printf("Lista vazia.\n");
	}
	else{
		printf("Elementos da lista:\n");
		for (i=0; i<L->n; i++){
			printf("%c\n", L->elem[i]);
		}
	}
}

void acessarList(Lista *L, int k){
	char dado;
	if((k<0 || k>(L->n-1)) || (L->n > m-1)){
		printf("Lista vazia.");
	}
	else{
		dado=L->elem[k];
		printf("%c", dado);
	}
}

void removerFinal(Lista *L){
	if (L->n == 0){
		printf("Lista vazia.\n");
	}
	else {
		L->n--;
	}
}

main(){
	setlocale(LC_ALL,"");
	int r;
	char op;
	char dado;
	Lista L;
	iniciaLista(&L);
	r=menu();
	while(r!=6){
		if(r==1){
			system("cls");
			printf("Informe o valor a ser inserido na lista: ");
			scanf("%s", &dado);
			inserirFinal(&L,dado);
			r=menu();
		}
		else if(r==2){
			removerFinal(&L);
			r=menu();
		}
		else if(r==3){
			exibir(&L);
			r=menu();
		}
		else if(r==4){
			int k;
			system("cls");
			printf("Informe a posição que deseja consultar: ");
			scanf("%d", &k);
			printf("\n");
			acessarList(&L, k);
			r=menu();
		}
		else if(r==5){
			iniciaLista(&L);
			r=menu();
			
		}
	}
	
}
