#include<stdio.h>
int pow(int x, int y){
	if(y==0)
		return(0);
	else if(y==1)
		return(x);
	else
		return(x*pow(x, y-1));
}
main(){
	int a, b;
	printf("Enter 1st No. : ");
	scanf("%d", &a);
	printf("Enter 2nd No. : ");
	scanf("%d", &b);
	printf("The % to the power %d : %d", a, b, pow(a,b));
}

