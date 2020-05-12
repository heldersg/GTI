#include<stdio.h>
int main (){
	float a, b, A, D, S, M;
	printf("Informe o primeiro valor: ");
	scanf("%f", &a);
	printf("Informe o segundo valor: ");
	scanf("%f", &b);
	A = a + b;
	D = a / b;
	S = a - b;
	M = a * b;
	printf("Adicao: %.3f ",A);
	printf("\nDivisao: %f ",D);
	printf("\nSubtracao: %.3f",S);
	printf("\nMultiplicacao: %.3f",M);
}
