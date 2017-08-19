#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuguese_Brazil");
	float notas[3][3], media;
	int cont=1, linha;
	for (linha=0; linha<3; linha++) {
		printf("Informe a %d° nota do trabalho: ", cont++);
		scanf("%f", &notas[linha][0]);
		printf("Informe a %d° nota da prova: ", cont++);
		scanf("%f", &notas[linha][1]);
		notas[linha][2]=(notas[linha][0]+notas[linha][1])/2;
	}
	printf("\n\tTrab. | Prova | Média");
	for(linha=0; linha<3; linha++) {
		printf("\n\t[%.1f] | [%.1f] | [%.1f]", notas[linha][0], notas[linha][1], notas[linha][2]);
	}
}
