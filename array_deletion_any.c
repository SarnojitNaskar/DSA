#include <stdio.h>
int main(){
	int a[20], i, n, data, loc, mid;
	printf("Enter the Size of The Array : ");
	scanf("%d",&n);
	printf("Enter the Elements of The Array : \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("The Elements of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
	printf("Enter the Location : ");
	scanf("%d", &loc);
	printf("The Deleted Element : %d\n", a[loc-1]);
	for(i=loc-1; i<n; i++){
		a[i] = a[i+1];
	}
	n = n-1;
	printf("The Elements of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}

