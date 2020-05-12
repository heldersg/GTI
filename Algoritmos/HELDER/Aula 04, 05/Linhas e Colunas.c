#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int n, i, j;
	scanf("%d", &n);
	system("cls");
	for (i=1; i<=n; i++){
		for (j=1; j<=i; j++){
		printf("%d ", j);
	}
	printf("\n");	
	}
}
