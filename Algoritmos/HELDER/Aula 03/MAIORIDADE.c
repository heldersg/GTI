#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"");
int Idade;
printf("Qual a sua idade: ");
scanf("%d", &Idade);
if(Idade >=18){
printf("Voc� � maior de idade.");
}else{
printf("Voc� � menor de idade.");
}
}

