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
		printf("\n***MENU***\n1-Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n5-Encerrar\nEscolha a sua op��o: ");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				resultado=n1+n2;
				printf("O valor da soma �: %f\n", resultado);
				break;
			case 2:
				resultado=n1-n2;
				printf("O valor da subtra��o �: %f\n", resultado);
				break;
			case 3:
				resultado=n1*n2;	
					printf("O valor da multiplica��o �: %f\n", resultado);
					break;
			case 4:
				resultado=n1/n2;
				printf("O valor da divis�o �: %f\n", resultado);
				break;
			case 5:
				printf("\nObrigado por participar!!");
				return 0;
			default:
				printf("Op��o n�o aceita!!!\n");				
		}
		system("pause");
	}
	

}
