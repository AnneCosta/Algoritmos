#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#define m 5

typedef struct{
	int t;
	int mat[m];
	float sal[m];
}Lista;

int menu(){
	int r;
	
	printf("                        Menu Lista\n");
	printf(" ____________________________________________________________ \n");
	printf("|                                                            |\n");
	printf("|   1 - Inserir no final                                     |\n");
	printf("|   2 - Inserir no K_ésimo nó da lista                       |\n");
	printf("|   3 - Mostrar a matrícula do maior e menor salário         |\n");
	printf("|   4 - Remover o K_ésimo nó da lista                        |\n");
	printf("|   5 - Ordenar a lista                                      |\n");
	printf("|   6 - Exibir a lista                                       |\n");
	printf("|   7 - Sair                                                 |\n");
	printf("|____________________________________________________________|\n\n");
	printf("Digite uma opção\n");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void iniciaLista (Lista *L){
	L->t=0;
}

//1
void inserirFinal(Lista *L){
	if(L->t > m-1){
		printf("Lista cheia.\n");
	}
	else{
		printf("Informe a matrícula (de 4 números): ");
		scanf("%d", &L->mat[L->t]);
		printf("Informe o salário (utilize ',' invés de '.'): ");
		scanf("%f", &L->sal[L->t]);
		L->t++;
	}
}
//2
void inserirK(Lista *L){
	int k, i;
	printf("Informe a posição que deseja adicionar: ");
	scanf("%d", &k);
	
	if (k > m-1 || k < 0){
		printf("Posição fora do limite.\n");
	}
	else{
		L->mat[L->t] = L->mat[k];
		L->sal[L->t] = L->sal[k];
		
		printf("Matrícula (de 4 números): ");
		scanf("%d", &L->mat[k]);
		printf("Salário (utilize ',' invés de '.'): ");
		scanf("%f", &L->sal[k]);
		printf("\n");
		
		L->t++;
	}	
}
//3
void maior_menor(Lista *L){
	int i;
	int maiorS = L->sal[0], menorS = L->sal[0], maiorM = L->mat[0], menorM = L->mat[0];
	
	if(L->t == 0){
		printf("Lista vazia. \n");
	}
	else{
		for (i=0; i<L->t; i++){
			if(L->sal[i] > maiorS){
				maiorS = L->sal[i];
				maiorM = L->mat[i];
			}
			if(L->sal[i] < menorS){
				menorS = L->sal[i];
				menorM = L->mat[i];
			}
		}
	}
	
	printf("MAIOR\tMENOR\n")
	printf("%d\t%d\n", maiorM, menorM);
}
//4
void removerK(Lista *L){
	int auxM, auxS;
	int k;
	
	printf("Informe a posição que deseja remover: ");
	scanf("%d", &k);
	
	if((k < 0) || k>= L->t){
		printf("Posição fora dos limites.\n");	
	}
	else{
		L->mat[k]= L->mat[L->t-1];
		L->sal[k]= L->sal[L->t-1];
		
		L->t--;
		
		printf("Posição removida.\n");
	}
}
//5
void ordenarLista(Lista *L){
	int i, j, auxMat;
	float auxSal;
	if(L->t == 0){
		printf("Lista vazia. \n");
	}
	else{
		for(i=0; i<L->t; i++){
			for(j=i+1; j<L->t; j++){
				if(L->mat[j] > L->mat[i]){
					auxSal = L->sal[i];
					auxMat = L->mat[i];
					L->sal[i] = L->sal[j];
					L->mat[i] = L->mat[j];
					L->sal[j] = auxSal;
					L->mat[j] = auxMat;
				}
			}	
		}	
		
		printf("Lista ordenada. \n");
		
		exibirLista(L);
	}
	
}
//6
void exibirLista(Lista *L){
	int i;
	if (L->t == 0){ 
		printf("Lista de cadastrados\n");
	}
	else{
		printf("MATRíCULA\tSALÁRIO\n");
		for(i=0; i<L->t; i++){
			printf("%d\t%.2f\n", L->mat[i], L->sal[i]);
		}
	}
	
}

main(){
	setlocale(LC_ALL,"");
	int r;
	Lista L;
	iniciaLista(&L);
	
	r=menu();
	while(r!=7){
		if(r==1){
			system("cls");
			inserirFinal(&L);
			system("cls");		
		}
		else if(r==2){
			system("cls");
			inserirK(&L);
			system("cls");
		}
		else if(r==3){
			system("cls");
			maior_menor(&L);
		}
		else if(r==4){
			system("cls");
			removerK(&L);
		}
		else if(r==5){
			system("cls");
			ordenarLista(&L);
		}
		else if(r==6){
			system("cls");
			exibirLista(&L);
		}
		r=menu();
	}
}
