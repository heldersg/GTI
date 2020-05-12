#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	//Vetor já preenchido;
	//int vet1[] = {1, 10, 40, 22, 55, 15, 14, 8, 77, 11};
	
	//solicitar valores ao usuario
	int vet1[10];
	int i, j, max;
	
	for(i=0; i<10; i++){
		printf("Digite valor da posicao %d: ", i);
		scanf("%d", &vet1[i]);
	}
	
	//busca
	max=vet1[0];
	for(i=0; i<10; i++){
		if(max < vet1[i]){
			max = vet1[i];
		}
	}
	printf("O Maior valor encontrado foi: %d", max);
}
