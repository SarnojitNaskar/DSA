#include <stdio.h>

void merge(int a[], int lb, int mid, int ub){
	int b[20];
	int i, j, k;
	i=lb;
	j=mid+1;
	k=lb;
	while((i<=mid) && (j<=ub)){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
		}else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid){
		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}
	}else
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
	}
	for(i=lb;i<=ub;i++){
		a[i]=b[i];
	}
}
void mergesort(int a[], int lb, int ub){
	int mid;
	if(lb<ub){
		mid = (lb+ub)/2;
		mergesort(a, lb, mid);
		mergesort(a, mid+1, ub);
		merge(a, lb, mid, ub);
	}
}

int main(){
	int a[20], i, n;
	printf("Enter the Size of The Array : ");
	scanf("%d",&n);
	printf("Enter the Elements of The Array : \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	mergesort(a,0,n-1);
	printf("The Sorted List of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}

