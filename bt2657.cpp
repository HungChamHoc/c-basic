#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\nTam giac can dac giua man hinh\n");
	printf("\n                *\n");
	printf("\n               ***\n");
	printf("\n              *****\n");
	printf("\n             *******\n");
	printf("\n            *********\n");
	
	printf("\nTam giac can rong giua man hinh\n");
	printf("\n                *\n");
	printf("\n               * *\n");
	printf("\n              *   *\n");
	printf("\n             *     *\n");
	printf("\n            *********\n");
	
	printf("\nTam giac vuong can dac giua man hinh\n");
	printf("\n            *\n");
	printf("\n            ***\n");
	printf("\n            *****\n");
	printf("\n            *******\n");
	printf("\n            *********\n");
	
	printf("\nTam giac vuong can rong giua man hinh\n");
	printf("\n            *\n");
	printf("\n            * *\n");
	printf("\n            *   *\n");
	printf("\n            *     *\n");
	printf("\n            *********\n");
	
	printf("\nHinh chu nhat dac\n");
	printf("\n            ************\n");
	printf("\n            ************\n");
	printf("\n            ************\n");
	printf("\n            ************\n");
	
	printf("\nHinh chu nhat rong\n");
	printf("\n            ************\n");
	printf("\n            *          *\n");
	printf("\n            *          *\n");
	printf("\n            ************\n");
	
	int i,j,k;
	for(i=0;i<=200;i++){
		for(j=0;j<=100;j++){
			for(k=0;k<=40;k++){
				if(i + 2*j + 5*k == 200){
					printf("\n%d to 1000,%d to 2000,%d to 5000",i,j,k);
				}
			}
		}
	}
	return 0;
}
