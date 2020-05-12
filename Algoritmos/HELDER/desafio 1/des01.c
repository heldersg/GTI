// O programa se destina a calcular a circunferência de um determinado planeta
// observando o ângulo A e a distância D, em estádios, entre duas localidades.
// Vamos utilizar como base o cálculo feito por Eratóstenes para a Terra com uma casa decimal de precisão.
// A entrada do programa será a distância D e o ângulo A.
// A saída do programa mostra a circunferência Ce, em estádios, e Ckm, em quilômetros.
// Helder Sabino Graça RA:2760781923029
#include<stdio.h>
int main(){
	float A, D, Ce, Ckm, i, e;
	e=0.1764; //Valor correspondente em quilometro para 1 estadio.
	printf("Forneca os valores da distancia em estadios e do angulo.\nDistancia em estadios: "); //Imprimindo solicitação ao usuário.
	scanf("%f", &D); //Entrada de valores pelo usuário.
	printf("Angulo: "); //Imprimindo solicitação ao usuário.
	scanf("%f", &A); //Entrada de valores pelo usuário.
	i=360/A; //Cálculo do fator de multiplicação para achar a circunferência.
	Ce=i*D; //Cálculo da circunferência em estádios.
	Ckm=Ce*e; //Convertendo estadios em quilômetros.
	printf("\nCircunferencia do planeta em estadios: %.1f", Ce); //Imprimindo valor na tela.
	printf("\nCircunferencia do planeta em quilometros: %.1f", Ckm); //Imprimindo valor na tela.
}
