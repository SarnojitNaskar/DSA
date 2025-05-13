#include<stdio.h>
#define MAX 20

int hash1(int k,int m){
    int p;
    p=k%m;
    return p;
}

void initialize(int x[],int n){
    int i;
    for(i=0;i<n;i++)
    	x[i]=-1;
}

void display(int x[],int n){
    int i;
    for(i=0;i<n;i++)
    	printf("%d	",x[i]);
}

int position(int x[],int n,int h){
    h=h+1;
    while(x[h]!=-1)
    	h=h+1;
    if(h==n-1 && x[h]!=-1)
    	return position(x,n,-1);
    else
    	return h;
}

int main(){
    int a[MAX];
    int n;
    printf("Enter the Size of The Array : ");
	scanf("%d",&n);
    if(n<=MAX){
        initialize(a,n);
        printf("Enter the Elements of The Array : ");
        int elem,i,h,p,f=0;
        for(i=0;i<n;i++){
            printf("\nElement %d : ",i+1);
            scanf("%d",&elem);
            h=hash1(elem,n);
            if(a[h]==-1)
            	a[h]=elem;
            else{
                p=position(a,n,h);
                a[p]=elem;
            }
            printf("Hash table at this stage : ");
            display(a,n);
        }
        int item;
        printf("\nEnter the element to search : ");
        scanf("%d",&item);
        int pos;
        pos=hash1(item,n);
        if(a[pos]==item)
        	printf("Element found at %d",pos+1);
        else{
            for(i=pos;i<n;i++){
                if(a[i]==item){
                    f=1;
                    printf("Element found at %d",i+1);
                    break;
                }
            }if(f==0)
            	printf("Element not found");
        }
    }else
    	printf("Hash table size exceeds its maximum size");
    return 0;
}

