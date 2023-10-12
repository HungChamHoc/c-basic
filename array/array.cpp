
#include <stdio.h>
#include <string.h>

int main(){
	int m[5][4],i,j;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("\nNhap m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	} 
	
	return 0;
}
