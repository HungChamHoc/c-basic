#include <stdio.h>

int main(){
	int max,i,n1=1,n2=1;
	printf("\nNhap Fibonaci max =");
	scanf("%d",&max);
	printf("\nDay so Fibonaci la\n ");
	printf("%d\n%d\n",n1,n2);
	for(i=2;i<max;i=n1+n2){
		i = n1 + n2;
		n1 = n2;
		n2 = i;
		printf("%d\n",i);
	}
	
	return 0;
}
