#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int opc;
while(opc!=5){
	system("cls");
	printf("***CARDÁPIO***\n1-'Prato1'\n2-'Prato2'\n3-'Prato3'\n4-'Prato4'\n5-SAIR\nOpção: ");
	scanf("%d", &opc);
	switch(opc){
		case 1:
			printf("'Prato1'\n");
			break;
		case 2:
			printf("'Prato2'\n");
			break;
		case 3:
			printf("'Prato3'\n");
			break;
		case 4:
			printf("'Prato4'\n");
			break;
		case 5:
			printf("Obrigado pela preferência!\n");
			break;
		default:
			printf("Opção inválida!");
		}
		system("pause");
	}
}
