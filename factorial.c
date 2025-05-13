#include<stdio.h>
int fact(int n){
	if(n==1)
		return(1);
	else
		return(n*fact(n-1));
}
main(){
	int x;
	printf("Enter a No. : ");
	scanf("%d", &x);
	printf("Factorial of %d : %d", x, fact(x));
}

