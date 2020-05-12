#include <stdio.h>

int main(){
	
	// Este programa ira calcular a circunferencia da Terra a partir de dois dados
	// A primeira informação necessária é a distancia entre duas cidades em estadios
	// A segunda informação necessária é o angulo formado pela sobra em bastão perpendicular ao solo
	 
	float est, a, ac, c, k;
	
	printf("\nQual a distancia em estadios entre as duas cidades: ");
	scanf("%f", &est);
	printf("\nQual foi o angulo formado: ");
	scanf("%f", &a);
	
	ac=360/a; // chegar no fator do angulo
	
	c=ac*est; // cincunferencia em estadio
	
	k=(c*176.4)/1000; // calculando a circunferencia em Km
	
	printf("\nA cincunferencia em estadio eh de: %.1f", c);
	printf("\nA cincunferencia em KM eh de: %.1f", k);
	
}
	
	
	
	
