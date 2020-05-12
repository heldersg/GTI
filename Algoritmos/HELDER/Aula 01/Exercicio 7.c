#include<stdio.h>
int main (){
	float KmP, Comb, Gasto;
	printf("Km Percorrida: ");
	scanf("%f", &KmP);
	printf("Preco do combustivel: ");
	scanf("%f", &Comb);
	Gasto=(KmP/8)*Comb;
	printf("Toatal Gasto: %f", Gasto);
}
