#include <stdio.h>
int main(){
	int a[20], i, j, min, swap, n;
	printf("Enter the Size of The Array : ");
	scanf("%d",&n);
	printf("Enter the Elements of The Array : \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		if(min != i){
			swap = a[min];
			a[min] = a[i];
			a[i] = swap;
		}
	}
	printf("The Sorted List of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}

