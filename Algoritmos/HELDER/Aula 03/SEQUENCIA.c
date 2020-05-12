#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int n1, n2, n3;
printf("Digite 3 números quaisquer""\nNúmero 1: ");
scanf("%d", &n1);
printf("Número 2: ");
scanf("%d", &n2);
printf("Número 3: ");
scanf("%d", &n3);
if(n1<n2 && n2<n3)
printf("%d %d %d", n1, n2, n3);
else if(n1<n3 && n3<n2)
printf("%d %d %d", n1, n3, n2);
else if(n2<n1 && n1<n3)
printf("%d %d %d", n2, n1, n3);
else if (n2<n3 && n3<n1)
printf("%d %d %d", n2, n3, n1);
else if(n3<n1 && n1<n2)
printf("%d %d %d", n3, n1, n2);
else if(n3<n2 && n2<n1)
printf("%d %d %d", n3, n2, n1);
}
