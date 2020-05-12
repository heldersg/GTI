#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int opc=5;
	int i;
	float n1, n2, resultado;
	do{
		system("cls");
		printf("Digite primeiro numero: ");
		scanf("%f", &n1);
		printf("Digite segundo numero: ");
		scanf("%f", &n2);
		printf("\n***MENU***\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Encerrar\nEscolha a sua opção: ");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				resultado=n1+n2;
				printf("O valor da soma é: %f\n", resultado);
				break;
			case 2:
				resultado=n1-n2;
				printf("O valor da subtração é: %f\n", resultado);
				break;
			case 3:
				resultado=n1*n2;	
					printf("O valor da multiplicação é: %f\n", resultado);
					break;
			case 4:
				resultado=n1/n2;
				printf("O valor da divisão é: %f\n", resultado);
				break;
			case 5:
				printf("\nObrigado por participar!!");
				return 0;
			default:
				printf("Opção não aceita!!!\n");				
		}
		printf("\nExecutando for...\n");
		for(i=1;i<=50;i++){
			printf("\nAnderson\n");
		}
		
		//mesmo resultado
		printf("\nExecutando while\n");
		i=1;
		while(i<=50){
			printf("\nAnderson\n");
			i++;
		}
		
		system("pause");
		
	}
	while(opc!=5);
	

}
