#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int n1, n2, c, ca;
	printf("Primeiro número: ");
	scanf("%d", &n1);
	printf("Segundo número: ");
	scanf("%d", &n2);

	//for(c = 1; c<=n2; c++){
	//	ca = ca*n1;
	
	while (c <=2) {
		ca = ca*n1;
		c++;
	}printf("%d", ca);
}
