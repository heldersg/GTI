#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float N1, N2, N3, M;
printf("Informe suas notas para saber sua situa��o\nNota 1: ");
scanf("%f", &N1);
printf("Nota 2: ");
scanf("%f", &N2);
printf("Nota 3: ");
scanf("%f", &N3);
M=(N1+N2+N3)/3;
if(M>=7)
printf("Voc� foi aprovado");
else if(M>=5 && M<7)
printf("Voc� ficou de recupera��o");
else
printf("Voc� foi reprovado");
printf("\nM�dia Final: %.2f", M);
}
