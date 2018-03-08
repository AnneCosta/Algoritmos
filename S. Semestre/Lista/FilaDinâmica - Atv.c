#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no* lig;
}tno;

typedef struct{
	tno* inicio;
	tno* fim;
}fila;
fila f;

int menu(){
	int r;
	
	printf("                                  Menu Fila");
	printf("---------------------------------------------------------------------------");
	printf("0 - SAIR");
	printf("1 - INSERIR NO FINAL");
	printf("2 - EXIBIR");
	printf("3 - REMOVER DO INÍCIO");
	printf("4 - ESVAZIAR");
	printf("5 - MOSTRAR O VALOR MÉDIO");
	printf("6 - MOSTRAR OS VALORES PARES");
	printf("7 - CONTAR QUANTAS VEZES O VALOR K APARECE");
	printf("8 - CRIAR UMA FILA F2 E PREENCHER COM OS VALORES DA FILA F NA ORDEM INVERSA");
	printf("---------------------------------------------------------------------------");
	printf("Digite a opção");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void inicia(fila *f){ // ok
	f->inicio = NULL;
	f->fim = NULL;
}

void inserir(fila *f, tno *info){ // ok
	tno *no;
	no = malloc(sizeof(tno));
	if(no == NULL){
		printf("Operação não realizada.\n");
	}
	no->info = info;
	no->lig = NULL;
	
	if(f->inicio==NULL){
		f->inicio = no;
	}
	else{
		f->fim->lig = no;
	}
	f->fim = no;
}

void exibir(fila *f){ // ok
	tno *no;
	no = f->inicio;
	while(no != NULL){
		printf("%d\n", no->info);
	}
}

void remover(fila *f, tno *info){
	tno *no;
	
	if(f->inicio == NULL){
		printf("Operação não realizada.\n");
	}
	no = f->inicio;
	*info = no->info;
	f->inicio = no->lig;
	
	if(f->inicio == NULL){
		f->fim = NULL;
	}
	free(no);
}

void esvaziar(fila *f){
	tno *ndel, *proximono;
	
	if(!f->inicio == NULL){
		proximono = f->inicio;
	}
	while(proximono != NULL){
		ndel = proximono;
		proximono = proximono->lig;
		free(ndel);
	}
	inicia(f);
}

void valormedio(fila *f){
	
}

void valorpar(fila *f){
	
}

void contarK(fila *f){
	
}

void criarF2(fila *f){
	
}

main(){
	int r, info;
	iniciar(f);
	r=menu();
	
	while(r!=0){
		if(r==1){
			printf("Insira um valor: ");
			scanf("%d", &info);
			inserir(f, info);
		}
		else if (r==2){
			exibir(f);
		}
		else if(r==3){
			remover(f, info);
		}
		else if(r==4){
			esvaziar(f);
		}
	}
}
