#include<stdio.h>
int add(int x, int y){
	if(y==0)
		return(x);
	else
		return(1+add(x, y-1));
}
main(){
	int a, b;
	printf("Enter 1st No. : ");
	scanf("%d", &a);
	printf("Enter 2nd No. : ");
	scanf("%d", &b);
	printf("Sum of %d and %d : %d", a, b, add(a,b));
}

