#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"");
int Idade;
printf("Digite sua idade: ");
scanf("%d", &Idade);
if(Idade<16)
printf("Voc� n�o pode votar.");
else if(Idade<=17 || Idade>=65)
printf("O voto � Facultativo.");
else
printf("O voto � obrigat�rio.");
}

