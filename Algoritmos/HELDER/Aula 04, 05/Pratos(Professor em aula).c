#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int opc=1;
	while(opc!=5){
	system("cls");
	printf("\n***MENU***\n");
	printf("1-Feijoada\n2-Pastel\n3-Vaca Atolada\n");
	printf("4-Bife a Milanesa\n5-SAIR\n");
	printf("Escolha sua op��o: ");
	scanf("%d", &opc);
	switch(opc){
	case 1:
		printf("\nVoc� escolheu Feijoada\n");
		break;
	case 2:
		printf("\nVoc� escolheu Pastel\n");
		break;
	case 3:
		printf("\nVoc� escolheu Vaca Atolada\n");
		break;
	case 4:
		printf("\nVoc� escolheu Bife a Milanesa\n");
		break;
	case 5:
		printf("\nObrigado por usar o sistema!!!\n");
		return 0;
		break;
	default:
		printf("\nEsse prato n�o existe!!!\n");
	} //chave do switch
	system("pause");
	} //chave do while
}
