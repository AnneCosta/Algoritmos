#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
	int info;
	struct no* prox;
}Fila;

typedef struct {
	Fila* inicio;
	Fila* fim;
}fila;

fila f;
fila f2;

int menu(){
	int r;
	
	printf("                                  Menu Fila\n");
	printf("---------------------------------------------------------------------------\n");
	printf("0 - SAIR\n");
	printf("1 - INSERIR NO FINAL\n");
	printf("2 - EXIBIR\n");
	printf("3 - REMOVER DO INÍCIO\n");
	printf("4 - ESVAZIAR\n");
	printf("5 - VALOR MÉDIO\n");
	printf("6 - VALORES PARES\n");
	printf("7 - CONTAR QUANTAS VEZES O VALOR K APARECE\n");
	printf("8 - CRIAR SEGUNDA LISTA COM VALORES INVERTIDOS\n");
	printf("---------------------------------------------------------------------------\n\n");
	printf("Digite a opção ");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void inicia(fila *f){ 
	f->inicio = NULL;
	f->fim = NULL;
}


void inserir(fila *f, int dado){ // 01
	Fila *aux;
	aux = malloc(sizeof(Fila));
	
	aux->info = dado;
	aux->prox = NULL;
	
	
	if(f->inicio == NULL){
		f->inicio = aux;
	}
	else{
		f->fim->prox = aux;
	}
	
	f->fim = aux;
	printf("Informação adicionada.\n");
}

void exibir(fila *f){ // 02
	Fila *aux;
	aux = f->inicio;
	
	if(f->inicio == NULL){
		printf("Fila vazia!\n");
	}
	else{
		while(aux != NULL){
			printf("%d\n", aux->info);
			aux = aux->prox;
		}
	}
}

void remover(fila *f){ // 03
	Fila *aux;
	
	if(f->inicio == NULL){
		printf("Fila vazia.\n");
	}
	else{
		aux = f->inicio;
		f->inicio = aux->prox;	
	}
	free(aux);
	printf("Informação removida.\n");
}

void esvaziar(fila *f){ // 04
	Fila *aux;
	Fila *aux2;
	
	aux = f->inicio;
	
	while(aux != NULL){
		aux2 = aux;
		aux = aux->prox;
		free(aux2);
	}
	
	f->inicio = NULL;
	f->fim = NULL;
	
	printf("Fila esvaziada.\n");
}

void valormedio(fila *f){ // 05
	Fila *aux;
	float media = 0, soma = 0;
	int cont = 0;
	aux = f->inicio;
	
	if(f->inicio == NULL){
		printf("Fila vazia.\n");
	}
	else{
		while(aux != NULL){
			soma += aux->info;
			aux = aux->prox;
			cont++; 
		}
	}
	
	media = soma/cont;
	printf("O valor médio da fila é: %.1f\n", media);
}

void valorpar(fila *f){ // 06
	Fila *aux;
	aux = f->inicio;
	
	printf("Os valores pares são:\n");
	while(aux != NULL){
		if(aux->info % 2 == 0){
			printf("%d\n", aux->info);
		}
		aux = aux->prox;
	}
}

void contarK(fila *f){ // 07
	Fila *aux;
	int k, auxcont = 0;
	aux = f->inicio;
	
	printf("Informe o valor: ");
	scanf("%d", &k);
	
	while(aux != NULL){
		if(aux->info == k){
			auxcont++;
		}
		aux = aux->prox;
	}
	
	if(auxcont == 1){
		printf("O número %d foi inserido %d vez.", k, auxcont);
	}
	else if((auxcont == 0) || (auxcont > 1)){
		printf("O número %d foi inserido %d vezes.", k, auxcont);
	}
	
}

void criarF2(fila *f, fila *f2){ // 08
	Fila *aux;
	int i = 0, auxcont = 0, valor = 0;
	inicia(&f2);
	
	aux = f->inicio;
	while(aux != NULL){
		auxcont++;
		aux = aux->prox;
	}
	
	int vetoraux[auxcont];
	aux = f->inicio;
	
	while(aux != NULL){
		vetoraux[valor] = aux->info;
		aux = aux->prox;
		valor++;
	}
	
	for(i=auxcont-1; i>=0; i--){
		inserir(&f2, vetoraux[i]);
	}
	
	exibir(&f2);
}

main(){
	int r, dado;
	setlocale(LC_ALL, "");
	inicia(&f);
	r=menu();
	
	while(r!=0){
		system("cls");
		if(r==1){
			printf("Insira um valor: ");
			scanf("%d", &dado);
			inserir(&f, dado);
		}
		else if (r==2){
			exibir(&f);
		}
		else if(r==3){
			remover(&f);
		}
		else if(r==4){
			esvaziar(&f);
		}
		else if(r==5){
			valormedio(&f);
		}
		else if(r==6){
			valorpar(&f);
		}
		else if(r==7){
			contarK(&f);
		}
		else if(r==8){
			criarF2(&f, &f2);
		}
		r=menu();
	}
}


