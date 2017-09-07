#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese_Brazil");
	float F=0, C=0;
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f",&C);
	
	F=(9*C+160)/5;
	
	printf("A temperatura, em Fahrenheit, é: %.1f", F);
}
