#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int a, b, c;
printf("Digite 3 n�meros quaisquer\nN�mero 1: ");
scanf("%d", &a);
printf("N�mero 2: ");
scanf("%d", &b);
printf("N�mero 3: ");
scanf("%d", &c);
if(a>b>c)
printf("%d", a);
else if(b>a>c)
printf("%d", b);
else if(c>a>b)
printf("%d", c);
else if(a==b && a==c)
printf("Os n�meros s�o iguais!");
}
