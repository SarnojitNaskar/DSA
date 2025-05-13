#include<stdio.h>
int tailrecsum(int x, int total){
	if(x==0)
		return(total);
	else
		return(tailrecsum(x-1, total+x));
}
main(){
	int n, t;
	printf("Enter Upper Bound : ");
	scanf("%d", &n);
	printf("Enter Total Recursions : ");
	scanf("%d", &t);
	printf("%d", tailrecsum(n, t));
}

