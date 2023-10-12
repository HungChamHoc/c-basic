#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("\nNhap n =");
	scanf("%d",&n);
	int t[n];
	int i,j,mid;
	for(i=0;i<n;i++){
		printf("\nNhap t[%d] = ",i);
		scanf("%d",&t[i]);
	}
	printf("\nMang N theo thu tu giam dan la :");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(t[i]<t[j]){
				mid = t[i];
				t[i] = t[j];
				t[j] = mid;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",t[i]);
	}
	
	return 0;
}
