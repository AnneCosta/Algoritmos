#include <stdio.h>
#include <locale.h>
void fatorial (int n) {
	int i, f=1;
	for (i=n; i>1; i--) f=f*i;
	printf("O fatorial é: %d", f);
}
int main () {
	setlocale(LC_ALL,"portuguese_Brazil");
	int n;
	printf("Informe um número inteiro: ");
	scanf("%d", &n);
	fatorial(n);
}
