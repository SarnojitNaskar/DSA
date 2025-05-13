#include<stdio.h>
int main(){
	int a[20], i, n, m, item, lb, ub, mid;
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
	lb = 0;
	ub = n-1;
	while(lb<ub){
		mid = (lb+ub)/2;{
			if(a[mid] == item){
				printf("%d", mid+1);
				break;	
			}else if(a[mid] > item){
				ub = mid-1;
				printf("%d", ub);
			}else{
				lb = mid+1;
				printf("%d", lb);
			}
		}
	}
	return 0;
}

