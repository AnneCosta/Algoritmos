#include <stdio.h>
int produto (int k, int z) {
	return (k*z);
}

int main () {
	int x, y, r;
	x=2; y=3;
	r=produto (x,y);
	printf("%d", r);
	return 0;
}
