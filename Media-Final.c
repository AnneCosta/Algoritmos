#include <stdio.h>

int main() {
	float MF, MO, AF;
	printf("Informe a media obtida: ");
	scanf("%f", &MO);
	printf("Informe a média da Avaliacao Final: ");
	scanf("%f", &AF);
	
	MF=(MO*7+AF*3)/10;
	
	printf("MF=(%.1f*7+%.1f*3)/10\n", MO, AF);
	printf("MF=%.1f", MF);
}
