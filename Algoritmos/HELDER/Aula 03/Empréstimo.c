#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float SB, DSC, SL, EMP, LIM;
printf("Sal�rio Bruto: ");
scanf("%f", &SB);
printf("Descontos: ");
scanf("%f", &DSC);
printf("Qual o valor do empr�stimo desejado: ");
scanf("%f", &EMP);
SL=SB-DSC;
LIM=SL*0.30;
if (EMP<LIM)
printf("Seu empr�stimo est� liberado.");
else
printf("Seu empr�stimo excedeu o limite permitido.");
}


