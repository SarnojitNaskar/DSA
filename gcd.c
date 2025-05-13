#include<stdio.h>
int gcd(int x, int y){
	if(x%y==0)
		return(y);
	else
		return(gcd(y, x%y));
}
main(){
	int a, b;
	printf("Enter 1st No. : ");
	scanf("%d", &a);
	printf("Enter 2nd No. : ");
	scanf("%d", &b);
	printf("GCD of %d and %d : %d", a, b, gcd(a,b));
}

