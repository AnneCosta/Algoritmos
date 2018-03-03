#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	float info;
	struct no* anterior;
}No;

typedef struct{
	No* topo;
}Pilha;

int menu(){
	int r;
	printf("                Editor de Pilha\n");
	printf("---------------------------------------------------\n");
	printf("|          1 - EMPILHAR                           |\n");
	printf("|          2 - DESEMPILHAR                        |\n");
	printf("|          3 - EXIBIR ELEMENTO DO TOPO            |\n");
	printf("|          4 - EXIBIR A PILHA                     |\n");
	printf("|          5 - ESVAZIAR A PILHA                   |\n");
	printf("|          6 - SAIR                               |\n");
	printf("---------------------------------------------------\n\n");
	printf("Digite sua opção\n");
	printf("> ");
	scanf("%d", &r);
}

Pilha* criar(void){
	Pilha *p;
	p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

No* push(Pilha *p, float v){
	No* aux;
	aux = (No*) malloc(sizeof(No));
	aux->info = v;
	aux->anterior = p->topo;
	p->topo = aux;
	return aux;
}

float remover(Pilha *p){
	float v;
	No* aux;
	if(p->topo == NULL){
		printf("Pilha vazia.\n");
		exit(1);
	}
	v = p->topo->info;
	aux = p->topo;
	p->topo = aux->anterior;
	free(aux);
	return v;
}

void esvaziar(Pilha *p){
	No* q = p->topo;
	while(q != NULL){
		No *t = q->anterior;
		free(q);
		q = t;
	}
	p->topo = NULL;
}

void imprime(Pilha *p){
	No* q;
	for(q=p->topo; q!=NULL; q=q->anterior){
		printf("%4.2f\n", q->info);
	}
}

main(){
	int r;
	Pilha* p = criar();
	r=menu();
	while(r!=6){
		if(r==1){
			push(p, )
		}
		else if(r==2){
			
		}
		else if(r==3){
			
		}
		else if(r==4){
			imprime(p);
		}
		else if(r==5){
			esvaziar(p);
			printf("Pilha esvaziada.\n");
		}
		r=menu();
	}
}

