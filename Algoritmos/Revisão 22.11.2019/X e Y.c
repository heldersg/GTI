#include<stdio.h>

int main(){
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("x=%d, y=%d", x, y);
	z=x;
	x=y;
	y=z;
	printf("\nx=%d, y=%d", x, y);
	return 0;
}
