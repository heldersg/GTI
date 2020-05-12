#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	//Vetor já preenchido;
	//int vet1[] = {1, 5, 35, 7, 55, 7, 14, 8, 5, 11};
	
	//solicitar valores ao usuario
	int vet1[10];
	int i, j, max, c, p1=0, p2=0, cont=0;
	
	for(i=0; i<10; i++){
		printf("Digite valor da posicao %d: ", i);
		scanf("%d", &vet1[i]);
	}
	//c=35;
	printf("Digite o valor da multiplicacao: ");
	scanf("%d", &c);
		
	for(i=0; i<10; i++){
		max=vet1[i];
		for(j=i+1; j<10; j++){
			if(c == (max * vet1[j])){
				cont++;
				p1 = max;
				p2 = vet1[j];
				printf("\nposicao: %d p1=%d\nposicao: %d p2=%d", i, p1, j, p2);
			}		
		}
		
	}
	if(cont==0){
		printf("\nNão existem tais valores!");
	}
	
}
