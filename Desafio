#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL,"portuguese_Brazil");
    int cont=0, x;
    char resp[5];
  
    printf("Telefonou para a vítima?\n(S) Sim (N) Não\n");
    scanf("%s", &resp[0]);
    printf("Esteve no local do crime?\n(S) Sim (N) Não\n");
    scanf("%s", &resp[1]);
    printf("Mora perto da vítima?\n(S) Sim (N) Não\n");
    scanf("%s", &resp[2]);
    printf("Devia para a vítima?\n(S) Sim (N) Não\n");
    scanf("%s", &resp[3]);
    printf("Já trabalhou com a vítima?\n(S) Sim (N) Não\n");
    scanf("%s", &resp[4]);
  
    for (x=0; x<5; x++){
        if (resp[x]=='S' || resp[x]=='s'){
            cont=cont+;
        }
    }
  
    if (cont==0 || cont==1){
        printf("\nInocente.");
    }
    else if (cont==2){
        printf("\nSuspeita.");
    }
    else if (cont==3 || cont==4){
        printf("\nCúmplice.");
    }
    else if (cont==5){
        printf("\nAssassino.");
    }
}
  
  
