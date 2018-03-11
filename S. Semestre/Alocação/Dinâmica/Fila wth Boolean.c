#include <stdio.h>
#include <stdlib.h>
#ifndef boolean
	#define boolean
	typedef enum{FALSE, TRUE} Boolean;
	#endif

typedef struct elem{
	tipo_info info;
	struct elem *lig;
}tipo_elem;

typedef struct{
	tipo_elem *inicio;
	tipo_elem *fim;
}fila;
fila q;

int menu(){
	int r;
	printf("                Editor de Fila\n");
	printf("---------------------------------------------------\n");
	printf("|          1 - INSERIR                            |\n");
	printf("|          2 - REMOVER                            |\n");
	printf("|          3 - EXIBIR ELEMENTO DO INÍCIO          |\n");
	printf("|          4 - EXIBIR A FILA                      |\n");
	printf("|          5 - ESVAZIAR A FILA                    |\n");
	printf("|          6 - SAIR                               |\n");
	printf("---------------------------------------------------\n\n");
	printf("Digite sua opção\n");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void definir(fila *q){
	q->inicio = NULL;
	q->fim = NULL;
}

boolean vazia(fila *q){
	return (q->inicio == NULL);
}

void tornar_vazia(fila *q){
	tipo_elem *ndel, *nextno;
	if(!vazia(q)){
		nextno = q->inicio;
		while(nextno ! NULL){
			ndel  nextno;
			nextno = nextno->lig;
			free(ndel);
		}
	}
	definir(q);
}

boolean inserir(fila *q, tipo_info *info){
	tipo_elem *p;
	p = malloc(sizeof(tipo_elem));
	if(p == NULL){
		return FALSE;
	}
	p->info = info;
	p->lig = NULL;
	if(vazia(q)){
		q->inicio = p;
	}
	else{
		q->fim->lig = p;
	}
	q->fim = p;
	return TRUE;
}

boolean remover(fila *q, tipo_info *info){
	tipo_elem *p;
	if(vazia(q)){
		return FALSE;
	}
	p = q->inicio;
	*info = p->info;
	q->inicio = p->lig;
	if(q->inicio == NULL;){
		q->fim = NULL;
	}
	free(p);
	return TRUE;
}

int tamanho(fila *q){
	tipo_elem *p;
	int cont = 0;
	p = q->inicio;
	while(p != NULL){
		cont++;
		p = p->lig;
	}
	return cont;
}

boolean comeco_fila(fila *q, tipo_info *item){
	if (vazia(q)){
		return FALSE;
	}
	*item = q->inicio->info;
	return TRUE;
}

main(){
	int r, x;
	definir(q);
	
	r=menu();
	while(r!=6){
		if(r==1){
			for(x=0; x<5; x++){
				printf("Informe o %d valor da fila: \n", x+1);
				scanf("%d", q);
			}
			inserir(q, info);
		}
		else if(r==2){
			remover(q, info);
		}
		else if(r==3){
			comeco_fila(q, info);
		}
		else if(r==4){
			
		}
		else if(r==5){
			tornar_vazia(q);
		}
		r=menu();
	}
}
