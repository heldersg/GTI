#include<stdio.h>
#include<locale.h>
int main(){
float N1, N2;
setlocale(LC_ALL,"");
printf("Forne�a dois n�meros quaisquer \nN�mero 1: ");
scanf("%f", &N1);
printf("N�mero 2: ");
scanf("%f", &N2);
if(N1<N2)
printf("%.2f, %.2f", N1, N2);
else
printf("%.2f, %.2f", N2, N1);
}

