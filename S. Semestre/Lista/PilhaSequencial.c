#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 5

typedef struct{
	int topo;
	float nota[max];
}Pilha;

int menu(){
	int r;
	
	printf("              Editor de Pilha\n");
	printf(" __________________________________________ \n");
	printf("|                                          |\n");
	printf("|   0 - Sair                               |\n");
	printf("|   1 - Empilhar                           |\n");
	printf("|   2 - Desempilhar                        |\n");
	printf("|   3 - Exibir a pilha                     |\n");
	printf("|   4 - Nó contendo um determinado valor   |\n");
	printf("|   5 - Valor de um determinado nó         |\n");
	printf("|   6 - Maior e o menor valor              |\n");
	printf("|   7 - O Elemento do topo                 |\n");
	printf("|   8 - As posições dos elementos pares    |\n");
	printf("|   9 - Ordenação crescente                |\n");
	printf(" __________________________________________ \n\n");
	printf("Digite sua opção\n");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void iniciaPilha(Pilha *P){
	P->topo=0;
}

void empilhar(Pilha *P){
	float n;
	if (P->topo == max){
		printf("Pilha cheia.\n");
	}
	else {
		printf("Digite uma nota: ");
		scanf("%f",&n);
		
		P->nota[P->topo]=n;
		P->topo++;
	}
}

void desempilhar(Pilha *P){
	if(P->topo == max){
		printf("Pilha cheia.\n");
	}
	else{
		P->topo--;
	}
}

void exibir(Pilha *P){
	int i;
	
	for (i=0; i < P->topo; i++){
		printf("%.2f\n", P->nota[i]);
	}
}

void localizarNo(Pilha *P){
	int i, j;
	
	printf("Informe a posição que deseja consultar: ");
	scanf("%d", &j);
	
	for(i=0; i < P->topo; i++){
		if(i == j){
			printf("%.2f\n", P->nota[i]);
		}
	}
}

void valorNo(Pilha *P){
	int i;
	float j;
	
	printf("Informe a nota que deseja consultar: ");
	scanf("%f", &j);
	
	if(P->nota[i] == j){
		for(i=0; i < P->topo; i++){
			printf("%.2f\n", P->nota[i]);
		}
	}
	else{
		printf("A nota não existe na pilha.\n");
	}
}

void mmValor(Pilha *P){
	int maior, menor, i;
	
	for(i=0; i < P->topo; i++){
		if(P->nota[i] < menor){
			menor = P->nota[i];
		}
		if(P->nota[i] > maior){
			maior = P->nota[i];
		}
	}
	
	printf("A maior nota é: %.2f\n", maior);
	printf("A menor nota é: %.2f\n", menor);
}

void elemTopo(Pilha *P){
	int i;
	printf("%.2f\n", P->nota[i]);
	
}

void posicaoPar(Pilha *P){
	int i;
	
	for(i=0; i < P->topo; i++){
		if((i % 2)==0){
			printf("%.2f\n", P->nota[i]);
		}
	}
}

void ordCresc(Pilha *P){
	int i, j, aux;
	
	for(i=0; i < P->topo; i++){
		aux = P->nota[i];
		P->nota[i] = P->nota[j];
		P->nota[j] = aux;
	}
	
	printf(" - Notas Ordenadas - \n");
	for(i=0; i < P->topo; i++){
		printf("%.2f\n", P->nota[i]);
	}
}

main(){
	setlocale(LC_ALL,"");
	int r;
	
	Pilha P;
	
	iniciaPilha(&P);
	r=menu();
	
	while(r!=0){
		if(r==1){
			empilhar(&P);
		}
		if(r==2){
			desempilhar(&P);
		}
		if(r==3){
			exibir(&P);
		}
		if(r==4){
			localizarNo(&P);
		}
		if(r==5){
			valorNo(&P);
		}
		if(r==6){
			mmValor(&P);
		}
		if(r==7){
			elemTopo(&P);
		}
		if(r==8){
			posicaoPar(&P);
		}
		if(r==9){
			ordCresc(&P);
		}
		
		r=menu();
	}
}
