#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int Cargo;
float Salario, Emp;
printf("Digite o número correspondente ao seu cargo e salário. \nDiretoria=1, Gerência=2, Operacional=3 \nCargo: ");
scanf("%d", &Cargo);
printf("Salário: ");
scanf("%f", &Salario);
if(Cargo==1){
Emp=Salario*0.30;
printf("Valor do empréstimo: %.2f", Emp);}
else if(Cargo==2){
Emp=Salario*0.25;
printf("Valor do empréstimo: %.2f", Emp);
}else{
Emp=Salario*0.20;
printf("Valor do empréstimo: %.2f", Emp);}
}
