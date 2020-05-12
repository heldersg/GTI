#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	double vetor1[5], vetor2[5], resultado;
	int i;
	for(i=0; i<5; i++){
		printf("\nDigite posição %d do vetor1: ", i);
		scanf("%lf", &vetor1[i]);
	}
	resultado=0;
	for(i=0; i<5; i++){
		printf("\nDigite posição %d do vetor2: ", i);
		scanf("%lf", &vetor2[i]);
		resultado=resultado + (vetor1[i]*vetor2[i]);
	}
	printf("\n\nO produto interno é: %lf\n", resultado);
}
