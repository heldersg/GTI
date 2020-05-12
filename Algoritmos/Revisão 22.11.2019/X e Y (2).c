#include<stdio.h>

int main(){
	int x, y, z;
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	printf("x=%d, y=%d", x, y);
	z=x;
	x=y;
	y=z;
	printf("\nx=%d, y=%d", x, y);
}
