#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int n, i, j, aux=1;
	printf("Digite o número desejado: ");
	scanf("%d", &n);
	system("cls");
	for(i=1; i<=n; i++){
		for (j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	//for(i=1; i<=n; i++){
	for(i=n-1; i>=1; i--){		
		//for (j=n-1; j>=i; j--){
		for (j=1; j<=i; j++){			
			//printf("%d ", aux);
			printf("%d ", j);
			//aux++;
		}
		printf("\n");
		//aux=1;
	}
}
