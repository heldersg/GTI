#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"");
int Idade;
printf("Qual a sua idade: ");
scanf("%d", &Idade);
if(Idade >=18){
printf("Você é maior de idade.");
}else{
printf("Você é menor de idade.");
}
}

