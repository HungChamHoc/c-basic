#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int checkPrime(int n){
	int i;
	
	for(i=2;i<n-1;i++){
		if(n % i == 0){
			return 0;
		}
		return 1;
	}
}

int main(int argc, char *argv[]) {
	//ex1
	int result;
	int b;
	printf("\nEnter a number :");
	scanf("%d",&b);
	result = checkPrime(b);
	if(result == 0 ){
		printf("\n%d Number isn't prime !", b);
	}else{
		printf("\n%d Number is prime !", b);
	}	
	return 0;
}
