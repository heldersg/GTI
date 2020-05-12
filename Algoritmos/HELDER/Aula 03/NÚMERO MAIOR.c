#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int a, b, c;
printf("Digite 3 números quaisquer\nNúmero 1: ");
scanf("%d", &a);
printf("Número 2: ");
scanf("%d", &b);
printf("Número 3: ");
scanf("%d", &c);
if(a>b>c)
printf("%d", a);
else if(b>a>c)
printf("%d", b);
else if(c>a>b)
printf("%d", c);
else if(a==b && a==c)
printf("Os números são iguais!");
}
