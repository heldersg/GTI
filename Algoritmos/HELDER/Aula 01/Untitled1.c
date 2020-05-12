#include<stdio.h>
main(){
	int Idade;
	printf("Qual a sua idade: ");
	scanf("%d", &Idade);
	if(Idade > 17){
		printf("Liberado! Va para o buteco!");
	}else{
		printf("Va ja para casa!");
	}
}
