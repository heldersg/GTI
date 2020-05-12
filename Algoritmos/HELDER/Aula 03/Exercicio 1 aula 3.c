#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int numero;
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	if(numero%2==0 && numero>10)
	printf("SIM");
	else if(numero%2!=0 && numero <50)
	printf("SIM-Else IF");
	else
	printf("NÃO");
}
