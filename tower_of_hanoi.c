#include<stdio.h>
void move(int n, char source, char dest, char spare){
	if(n==1)
		printf("\nMove from %c to %c", source, dest);
	else{
		move(n-1, source, spare, dest);
		move(1, source, dest, spare);
		move(n-1, spare, dest, source);
	}
}
main(){
	int n;
	printf("Enter No. of Rings : ");
	scanf("%d", &n);
	move(n, 'A', 'C', 'B');
}

