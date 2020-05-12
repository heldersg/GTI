#include<stdio.h>

int main(){
	float vetor[10], s=0, m;
	int i;
	for (i=0; i<10; i++){
		printf("Digite o valor do vetor %d: ",i);
		scanf("%f", &vetor[i]);
		s=s+vetor[i];
	}
	m=s/10;
	printf("%.2f", m);
	
	
}
