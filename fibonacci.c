#include<stdio.h>
int fib(int n){
	if(n==0)
		return(0);
	else if(n==1)
		return(1);
	else
		return(fib(n-2)+fib(n-1));
}
main(){
	int x, i;
	printf("Enter size of the series : ");
	scanf("%d", &x);
	printf("The Fibonacci Series : ");
	for(i=0;i<x;i++)
		printf("%d  ", fib(i));
}

