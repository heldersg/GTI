#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int Cargo;
float Salario, Emp;
printf("Digite o n�mero correspondente ao seu cargo e sal�rio. \nDiretoria=1, Ger�ncia=2, Operacional=3 \nCargo: ");
scanf("%d", &Cargo);
printf("Sal�rio: ");
scanf("%f", &Salario);
if(Cargo==1){
Emp=Salario*0.30;
printf("Valor do empr�stimo: %.2f", Emp);}
else if(Cargo==2){
Emp=Salario*0.25;
printf("Valor do empr�stimo: %.2f", Emp);
}else{
Emp=Salario*0.20;
printf("Valor do empr�stimo: %.2f", Emp);}
}
