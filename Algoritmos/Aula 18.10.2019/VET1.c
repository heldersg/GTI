#include<stdio.h>
int main(){
	int VET1[10];
	int i, MAX=0;
	for (i=0; i<10; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &VET1[i]);
	}
	for (i=0; i<10; i++){
	if (MAX < VET1[i]){
		MAX=VET1[i];
		}
	}
	printf("Valor maior encontrado foi: %d", MAX);
}
