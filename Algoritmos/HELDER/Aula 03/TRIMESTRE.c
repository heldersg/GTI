#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int Dia, Mes;
	printf("Informe o dia e o m�s do seu anivers�rio \nDia: ");
	scanf("%d", &Dia);
	printf("M�s: ");
	scanf("%d", &Mes);
if( ((Dia<=31) && (Dia>0)) && (Mes==1) )
	printf("Tudo Certo. Voc� nasceu em Janeiro.");
else if( ((Dia<=28) && (Dia>0)) && (Mes==2) )
	printf("Tudo Certo. Voc� nasceu em Fevereiro.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==3) )
	printf("Tudo Certo. Voc� nasceu em Mar�o.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==4) )
	printf("Tudo Certo. Voc� nasceu em Abril.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==5) )
	printf("Tudo Certo. Voc� nasceu em Maio.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==6) )
	printf("Tudo Certo. Voc� nasceu em Junho.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==7) )
	printf("Tudo Certo. Voc� nasceu em Julho.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==8) )
	printf("Tudo Certo. Voc� nasceu em Agosto.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==9) )
	printf("Tudo Certo. Voc� nasceu em Setembro.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==10) )
	printf("Tudo Certo. Voc� nasceu em Outubro.");
else if( ((Dia<=30) && (Dia>0)) && (Mes==11) )
	printf("Tudo Certo. Voc� nasceu em Novembro.");
else if( ((Dia<=31) && (Dia>0)) && (Mes==12) )
	printf("Tudo Certo. Voc� nasceu em Dezembro.");
else
	printf("Voc� digitou uma data inv�lida.");
if(Mes>0 && Mes<4)
	printf("\nVoc� nasceu no 1� Trimestre");
else if(Mes>3 && Mes<7)
	printf("\nVoc� nasceu no 2� Trimestre");
else if(Mes>6 && Mes<10)
	printf("\nVoc� nasceu no 3� Trimestre");
else if(Mes>9 && Mes<13)
	printf("\nVoc� nasceu no 4� Trimestre");
}

