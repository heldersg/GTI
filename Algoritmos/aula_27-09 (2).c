#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int opc=1;
	float n1, n2, resultado;
	while(opc!=5){
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
		system("pause");
	}
	

}
