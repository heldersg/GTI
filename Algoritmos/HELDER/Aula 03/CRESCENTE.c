#include<stdio.h>
#include<locale.h>
int main(){
float N1, N2;
setlocale(LC_ALL,"");
printf("Forneça dois números quaisquer \nNúmero 1: ");
scanf("%f", &N1);
printf("Número 2: ");
scanf("%f", &N2);
if(N1<N2)
printf("%.2f, %.2f", N1, N2);
else
printf("%.2f, %.2f", N2, N1);
}

