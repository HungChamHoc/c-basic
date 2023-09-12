#include<stdio.h>

int main() {
	int a;
	
	printf("\nNhap gia tri cua a = ");
	scanf("%d",&a);
	int a2 = a*a;
	printf("\na^2 =%d\n",a2);
	int a3 = a*a*a;
	printf("\na^3 =%d\n",a3);
	int a4 = a*a*a*a;
	printf("\na^4 =%d",a4);
	char str[15] ="14/03/2002";
	printf("\ndateofbirthday = %s",str);
	int x =1,y=2;
	printf("\nx = %d,y = %d\n",x,y);
	printf("\nx + y = %d\n",x + y);
	printf("\nx - y = %d\n",x - y);
	printf("\nx * y = %d\n",x * y);
	printf("\nx / y = %d\n",x / y);
	return 0;
}
