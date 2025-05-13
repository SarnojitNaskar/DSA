#include<stdio.h>
int main(){
	int a[20], i, n, m, item, loc;
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
	printf("Enter a No. For Search : ");
	scanf("%d",&item);
	for(i=0; i<n; i++){
		if(a[i] == item){
			printf("Location of The item : %d", i+1);
		}
	}
	return 0;
}

