#include<stdio.h>
#include<locale.h>
int main(){
char N1[20], N2[20];
int Id1, Id2;
setlocale(LC_ALL,"");
printf("Informe o nome e a idade de duas pessoas. \nNome 1: ");
scanf("%s", &N1);
printf("Idade 1: ");
scanf("%d", &Id1);
printf("Nomé 2: ");
scanf("%s", &N2);
printf("Idade 2: ");
scanf("%d", &Id2);
if(Id1 > Id2)
printf("%s, %s", N1, N2);
else if(Id1 = Id2)
printf("%s e %s tem a mesma idade.", N1, N2);
else
printf("%s, %s", N2, N1);
}

