#include<stdio.h>
int main(){
	float VET2[10], j, MED;
	int i;
	for (i=0; i<10; i++){
		printf("Digite um numero: ");
		scanf("%f", &VET2[i]);
	}
	for (i=0; i<10; i++){
		j=j+VET2[i];
	}
	MED=j/10;
	printf("A media dos valores: %f", MED);
}
