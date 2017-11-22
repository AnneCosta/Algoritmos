#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese_Brazil");
    int num1=0, num2=0, cont=0, v[20];
    for(num1=0; num1<20; num1++){
        printf("Informe o %dº número: ", num1+1);
        scanf("%d", &v[num1]);
    } 
    
    printf("Informe um número: ");
    scanf("%d",&num2);
    
    for(num1=0; num1<20; num1++){
        if(v[num1]==num2) {
            cont++;
        }
    }
    if(cont!=0){
		printf("\nO número %d repetiu-se %d vezes.", num2, cont);
	}
    if(cont==0){
		printf("\nO número %d não existe dentre os demais.", num2);
	}
}
