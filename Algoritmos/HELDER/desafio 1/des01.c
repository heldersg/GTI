// O programa se destina a calcular a circunfer�ncia de um determinado planeta
// observando o �ngulo A e a dist�ncia D, em est�dios, entre duas localidades.
// Vamos utilizar como base o c�lculo feito por Erat�stenes para a Terra com uma casa decimal de precis�o.
// A entrada do programa ser� a dist�ncia D e o �ngulo A.
// A sa�da do programa mostra a circunfer�ncia Ce, em est�dios, e Ckm, em quil�metros.
// Helder Sabino Gra�a RA:2760781923029
#include<stdio.h>
int main(){
	float A, D, Ce, Ckm, i, e;
	e=0.1764; //Valor correspondente em quilometro para 1 estadio.
	printf("Forneca os valores da distancia em estadios e do angulo.\nDistancia em estadios: "); //Imprimindo solicita��o ao usu�rio.
	scanf("%f", &D); //Entrada de valores pelo usu�rio.
	printf("Angulo: "); //Imprimindo solicita��o ao usu�rio.
	scanf("%f", &A); //Entrada de valores pelo usu�rio.
	i=360/A; //C�lculo do fator de multiplica��o para achar a circunfer�ncia.
	Ce=i*D; //C�lculo da circunfer�ncia em est�dios.
	Ckm=Ce*e; //Convertendo estadios em quil�metros.
	printf("\nCircunferencia do planeta em estadios: %.1f", Ce); //Imprimindo valor na tela.
	printf("\nCircunferencia do planeta em quilometros: %.1f", Ckm); //Imprimindo valor na tela.
}
