#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	float notas[100];
	int n, i;
	printf("N�mero de alunos: ");
	scanf("%d", &n);
	if(n>100){
		n=100;
		printf("\nN�mero m�ximo alterado para 100");
	}
	for(i=0; i<n; i++){
		printf("\nDigite a nota do %d� aluno: ", i+1);
		scanf("%f", &notas[i]);
	}
	for(i=0; i<n; i++){
		printf("\nNota do %d� aluno: %.1f", i+1, notas[i]);
	}
	
}
