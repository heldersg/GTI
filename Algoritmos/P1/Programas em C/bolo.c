#include<stdio.h>
int main(){
	int qt_pessoas;
	float divisao;
	printf("Digite o numero de pessoas");
	scanf("%d", &qt_pessoas);
	if(qt_pessoas > 0 && qt_pessoas !=1){
		divisao = 20 / (float) qt_pessoas; 
		printf("Numero de pedacos: %f", divisao); 	
	}else if(qt_pessoas == 1){
		printf("o bolo é todo seu!!!");
	}
	else{
		printf("Impossivel fazer a divisao!");		
	} 
	
}
