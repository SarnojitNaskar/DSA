#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void heap(int a[], int n, int i){
	int root=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && a[left]>a[root])
 		root = left;
 	if(right<n && a[right]>a[root])
 		root = right;
 	if(root!=i){
 		swap(&a[i], &a[root]);
 		heap(a, n, root);
	}
}
void heapsort(int a[], int n, int i){
	for(i=n/2-1;i>=0;i--)
        heap(a, n, i);
    for(i=n-1;i>=0;i--){
        swap(&a[0], &a[i]);
        heap(a, i, 0);
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
	heapsort(a, n, i);
	printf("The Sorted List of The Array : \n");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
		//printf("\n");
	}
	return 0;
}

