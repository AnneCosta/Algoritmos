#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define m 5

typedef struct{
	int topo;
	int elem[m];
}pilha;

int menu(){
	int r;
	
	printf("      EDITOR DE PILHA      \n");
	printf(" _________________________________\n");
	printf("|                                 |\n");
	printf("|   1 - EMPILHAR                  |\n");
	printf("|   2 - DESEMPILHAR               |\n");
	printf("|   3 - EXIBIR ELEMENTO DO TOPO   |\n");
	printf("|   4 - EXIBIR A PILHA            |\n");
	printf("|   5 - ESVAZIAR A PILHA          |\n");
	printf("|   6 - SAIR                      |\n");
	printf(" _________________________________\n\n");
	printf("Digite sua opção\n");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void iniciaPilha(pilha *P){
	P->topo = -1;
}

void empilhar(pilha *P, int i){
	if(P->topo==m-1){
		printf("Pilha cheia.\n");
	}
	else{
		P->topo++;
		P->elem[P->topo]=i;
	}
}

int topo(pilha *P){
	int i;
	if(P->topo == -1){
		printf("Pilha vazia.\n");
	}
	else{
		i=P->elem[P->topo];
		return (i);
	}
}

void desempilhar(pilha *P){
	if(P->topo == -1){
		printf("Pilha vazia.\n");
	}
	else{
		P->topo--;
	}
}

void exibirElementoTopo(){
	
}

void exibirPilha(){
	
}

void esvaziarPilha(){
	
}

 int main(){
 	setlocale(LC_ALL,"");
	int r, i;

	while(r!=6){
		if(r==1){
			
		}
		else if(r==2){
			
		}
		else if(r==3){
			
		}
		else if(r==4){
			
		}
		else if(r==5){
			
		}
	}
}
