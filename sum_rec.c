#include<stdio.h>
int recsum(int x){
	if(x==1)
		return x;
	else
		return(x+recsum(x-1));
}
main(){
	int n;
	printf("Enter Upper Bound : ");
	scanf("%d", &n);
	printf("%d", recsum(n));
}

