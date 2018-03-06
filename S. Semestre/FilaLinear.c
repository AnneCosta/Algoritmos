#include <stdio.h>
#include <stdlib.h>
#define m 5

typedef struct{
   int inicio, fim;
   int RG[m];
   float media[m];
}Fila;

int menu(){
	int r;
	
	printf("     Editor de Fila\n");
	printf(" ________________________________________________ \n");
	printf("|                                                |\n");
	printf("|        1 - Inserir                             |\n");
	printf("|        2 - Inserir depois do K_ésimo nó        |\n");
	printf("|        3 - Mostrar o RG com menor média        |\n");
	printf("|        4 - Remover o K_ésimo nó                |\n");
	printf("|        5 - Ordenação pela média                |\n");
	printf("|        6 - Exibir                              |\n");
	printf("|        7 - Sair                                |\n");
	printf(" ________________________________________________ \n\n");
	printf("Digite uma opção\n");
	printf("> ");
	scanf("%d", &r);
	
	return r;
}

void iniciaFila(Fila *F){

	F->inicio = 0;
	F->fim = -1;
}

void inserir(Fila *F){  //1
   
   if((F->fim == m-1) && (F->inicio != 0)){
      F->inicio = 0;
      F->fim = -1;
   }
   
	if (F->fim > m-1){
		printf("Fila cheia.\n");
	}
	else{
		F->fim++;
		
		printf("Informe o RG: ");
		scanf("%d", &F->RG[F->fim]);
		printf("Informe a média: ");
		scanf("%f", &F->media[F->fim]);
	}
	printf("Usuário adicionado!\n");
}

void inserirDps(Fila *F){  //2
   int posicao;
   
   printf("Informe a posição que deseja adicionar: ");
	scanf("%d", &posicao);
   
   
	if (F->fim > m-1){
		printf("Fila cheia.\n");
	}
	
	if(posicao>F->fim){
	   printf("Posição fora do limite.\n");
   }
	else{
		if(posicao==F->fim){
		   F->fim++;
      }
		
		printf("Informe o RG: ");
		scanf("%d", &F->RG[posicao]);
		printf("Informe a média: ");
		scanf("%f", &F->media[posicao]);
	}
	printf("Usuário adicionado!\n");
}

void menor(Fila *F){
   int menor=F->media[F->inicio], i=0;
   
   for(i=F->inicio; i<=F->fim;i++){
      if(F->media[i]<menor){
         menor=F->RG[i];
      }
   }
   
   printf("%d\n", menor);
}

void removerK(Fila *F){ //4
	int auxM, auxRG, i;
	int posicao;
	
	printf("Informe a posição que deseja remover: ");
	scanf("%d", &posicao);
	
	if(posicao>F->fim){
	   printf("Posição fora do limite.\n");
   }
	else{
	   for(i=F->fim; i>=posicao; i--){
	      F->RG[posicao]= F->RG[F->fim-1];
		   F->media[posicao]= F->media[F->fim-1];
      }
	   
		F->inicio++;
		
		printf("Posição removida.\n");
	}
}

void ordenar(Fila *F){ //5
	int aux=0, i=0;
		for(i=F->inicio; i<=F->fim; i++){
			if(F->media[i]>F->media[i+1]){
				aux=F->media[i];
            F->media[i]=F->media[i+1];
            F->media[i+1]=aux;
            
            aux=F->RG[i];
            F->RG[i]=F->RG[i+1];
            F->RG[i+1]=aux;
         }
      }
   printf("Ordenação concluída.\n");
}

void exibir(Fila *F){ //6
	int i;
	for (i = 0; i <= F->fim; i++){
		printf("%d - %.1f\n", F->RG[i], F->media[i]);
	}
}

main(){
   int r;
	
	Fila F;
	iniciaFila(&F);
	r=menu();
	
	while (r!=7){
		if(r==1){
			inserir(&F);
		}
		else if(r==2){
		   inserirDps(&F);
      }
      else if(r==3){
         menor(&F);
      }
      else if(r==4){
         removerK(&F);
      }
		else if(r==5){
		    ordenar(&F);
		}
		else if(r==6){
		   exibir(&F);
      }
		r=menu();
	}
}
