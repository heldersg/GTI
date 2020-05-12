#include<stdio.h>
int main(void){
float a, b, c, h, P, A;
	printf("Informe os valores dos lados, da base e da altura do triangulo");
	printf("\nValor do Lado 1: ");
	scanf("%f",&a);
	printf("Valor do Lado 2: ");
	scanf("%f",&c);
	printf("Valor da Base: ");
	scanf("%f",&b);
	printf("Valor da Altura: ");
	scanf("%f",&h);
	P=a+b+c;
	A=(b*h)/2;
	printf("Perimetro: %f",P);
	printf("\nArea: %f",A);
}
