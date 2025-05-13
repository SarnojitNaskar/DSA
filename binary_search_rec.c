#include<stdio.h>
int recBinSearch(int a[], int item, int lb, int ub){
	int mid;
	mid = (lb+ub)/2;
	if(lb<=ub)
	{
		if(a[mid] == item){
			return(mid);
		}
		else if(a[mid] > item){
			ub = mid-1;
		}
		else{
			lb = mid+1;
		}
		recBinSearch(a, item, lb, ub);
	}
	else
		return(-1);
}

int main(){
	int a[20], i, n, item, loc;
	printf("Enter the Size of The Array : ");
	scanf("%d", &n);
	printf("Enter the Elements of The Array : \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("The Elements of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Enter a No. For Search : ");
	scanf("%d", &item);
	loc=recBinSearch(a, item, 0, n-1);

	if(loc!=-1)
		printf("Element is found at position %d", loc+1);
	else
		printf("Element is not found");
	
	return 0;
}

