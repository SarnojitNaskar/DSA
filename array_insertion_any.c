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
	printf("Enter the New Element : ");
	scanf("%d", &data);
	for(i=n; i>loc-1; i--){
		a[i] = a[i-1];
	}
	a[i] = data;
	n = n+1;
	printf("The Elements of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}

