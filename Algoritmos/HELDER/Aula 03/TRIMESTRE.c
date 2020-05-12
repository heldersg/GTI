#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int Dia, Mes;
	printf("Informe o dia e o mês do seu aniversário \nDia: ");
	scanf("%d", &Dia);
	printf("Mês: ");
	scanf("%d", &Mes);
if( ((Dia<=31) && (Dia>0)) && (Mes==1) )
	printf("Tudo Certo. Você nasceu em Janeiro.");
else if( ((Dia<=28) && (Dia>0)) && (Mes==2) )
	printf("Tudo Certo. Você nasceu em Fevereiro.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==3) )
	printf("Tudo Certo. Você nasceu em Março.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==4) )
	printf("Tudo Certo. Você nasceu em Abril.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==5) )
	printf("Tudo Certo. Você nasceu em Maio.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==6) )
	printf("Tudo Certo. Você nasceu em Junho.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==7) )
	printf("Tudo Certo. Você nasceu em Julho.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==8) )
	printf("Tudo Certo. Você nasceu em Agosto.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==9) )
	printf("Tudo Certo. Você nasceu em Setembro.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==10) )
	printf("Tudo Certo. Você nasceu em Outubro.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==11) )
	printf("Tudo Certo. Você nasceu em Novembro.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==12) )
	printf("Tudo Certo. Você nasceu em Dezembro.");
else
	printf("Você digitou uma data inválida.");
if(Mes>0 && Mes<4)
	printf("\nVocê nasceu no 1º Trimestre");
else if(Mes>3 && Mes<7)
	printf("\nVocê nasceu no 2º Trimestre");
else if(Mes>6 && Mes<10)
	printf("\nVocê nasceu no 3º Trimestre");
else if(Mes>9 && Mes<13)
	printf("\nVocê nasceu no 4º Trimestre");
}

