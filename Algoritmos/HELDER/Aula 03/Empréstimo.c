#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float SB, DSC, SL, EMP, LIM;
printf("Salário Bruto: ");
scanf("%f", &SB);
printf("Descontos: ");
scanf("%f", &DSC);
printf("Qual o valor do empréstimo desejado: ");
scanf("%f", &EMP);
SL=SB-DSC;
LIM=SL*0.30;
if (EMP<LIM)
printf("Seu empréstimo está liberado.");
else
printf("Seu empréstimo excedeu o limite permitido.");
}


