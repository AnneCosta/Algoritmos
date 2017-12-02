#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

typedef struct{
	int comeco, fim;
	int elem[tam];
}Fila;

int menu(){
	int r;
	
	printf("     Editor de Fila\n");
	printf(" __________________________________ \n");
	printf("|                                  |");
	printf("|   1 - Inserir                    |");
	printf("|   2 - Remover                    |");
	printf("|   3 - Elemento do início         |");
	printf("|   4 - Exibir                     |");
	printf("|   5 - Esvaziar                   |");
	printf("|   6 - Sair                       |");
	printf(" __________________________________ \n");
}

void iniciaFila(Fila *F){
	F->comeco = 0;
	F->fim = -1;
}

void inserir(Fila *F, int i){
	if (F-> fim == tam-1){
		printf("Fila cheia.\n");
	}
	else{
		F->fim++;
		F->elem[F->fim]=i;
	}
}

void remover(Fila *F){
	if (F->fim < F->comeco){
		printf("Fila vazia.\n");
	}
	else{
		F->comeco++;
	}
}

int primeiro (Fila *F){
	int i;
	if (F->fim < F->comeco){
		prinf("Fila vazia.\n");
	}
	else{
		i = F->elem[F->comeco];
		printf("%d\n", i);
		//return (i);
	}
}

void exibir(Fila *F){
	int i;
	for (i = F->comeco; i <= F->fim; i++){
		printf("%d\n", F->elem[i]);
	}
}

void falsoCheio(Fila *F, int i){
	int i, com=F->comeco, fim=F->fim;
	F->comeco=0;
	F->fim=-1;
	
	for(i=com; i<=fim; i++){
		F->fim++;
		F->elem[F->fim]=F->elem[i];
	}
}

int main(){
	setlocale(LC_ALL, "");
	int r;
	
	Fila F;
	iniciaFila(&F);
	r=menu();
	
	while (r!=6){
		if(r==1){
			inserir(&F);
		}
		else if(r==2){
			remover(&F);
		}
		else if(r==3){
			primeiro(&F);
		}
		else if(r==4){
			exibir(&F);
		}
		else if(r==5){
			iniciaFila(&F);
		}
		system("cls");
		r=menu();
	}
	
}
