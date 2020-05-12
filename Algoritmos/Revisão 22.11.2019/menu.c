#include<stdio.h>
int main(){
	int opcao;
	while(opcao!=5){
		printf("Menu:\n1-Prato 1\n2-Prato 2\n3-Prato 3\n4-Prato 4\n5-SAIR");
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
			printf("\nPrato 1 escolhido!\n");
			break;
			case 2:
			printf("\nPrato 2 escolhido!\n");
			break;
			case 3:
			printf("\nPrato 3 escolhido!\n");
			break;
			case 4:
			printf("\nPrato 4 escolhido!\n");
			break;
			case 5:
			printf("\nObrigado pela preferencia!");
			return 0;
			default:
			printf("\nOpcao invalida!\n");
		}
		system("pause");
	}
}
