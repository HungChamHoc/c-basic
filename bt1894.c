#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n; 
	printf("\nNhap n =");
	scanf("%d",&n); 
	int num[n] ;
	int i,j;
	for(i=0;i<n;i++){
		printf("\nnum[%d] =",i);
		scanf("%d",&num[i]);
	}
	for(i=n-1;i>-1;i--){
		printf("%d ",num[i]);
	}
	printf("\nnum[n] =");
	int k;
	for(i=0;i<n;i++){
		for(j=n-1;j>-1;j--){
			num[i] = k;
			num[i] = num[j];
			num[j] = k;
		}
		printf("%d",num[i]);
	}
    
	
	return 0;
}
