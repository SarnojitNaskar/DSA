#include <stdio.h>
int main(){
	int a[20][20], i, j, m, n;
	printf("Enter the Size of The Array : ");
	scanf("%d%d", &m, &n);
	printf("Enter the Elements of The Array : \n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("The Elements of The Array : \n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}

