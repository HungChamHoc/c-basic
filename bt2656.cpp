#include <stdio.h>

int main(){
	
	int N,i;
	printf("\nNhap N =");
	scanf("%d",&N);
	printf("\nTong cac so hang tu 1 den N = %d\n",(N*(1+N))/2);
	printf("\nCac uoc so cua N la");
	for(i=1;i<=N;i++){
		if(N % i ==0){
			printf("\n%d",i);
		}
	}
	int num;
	printf("\nNhap num");
	scanf("%d",&num);
	for(i=1;i<11;i++){
		printf("\n%d * %d = %d",i,num,i * num);
	}
	
	return 0;
}
