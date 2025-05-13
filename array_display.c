#include <stdio.h>
int main(){
	int a[20], i, n;
	printf("Enter the Size of The Array : ");
	scanf("%d", &n);
	printf("Enter the Elements of The Array : \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("The Elements of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}

