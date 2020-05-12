#include<stdio.h>
int main(){
	char c;
	float b;
	int a;
	char palavra[10];
	printf("Digite uma palavra:");
	scanf("%s", &palavra);
	printf("Entre com um caracter:");
	scanf("%s", &c);
	printf("Entre com um ponto flutuante:");
	scanf("%f", &b);
	printf("Entre com um numero inteiro:");
	scanf("%d",&a);
	
		
	printf
	("Os dados lidos foram: %c, %.2f, %d \n",c,b,a);	
	printf("Palavra digitada: %s", palavra);
	printf("3. letra da Palavra digitada: %c", palavra[2]);
	
}
