#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		printf("Nghiem cua phuong trinh la %d",-b/a);
	}
	return 0;
}
