#include <stdio.h>

int main()
{
	//ex1
	int a,b;

	printf("\nNhap chieu dai =");
	scanf("%d",&a);
	printf("\nNhap chieu rong =");
	scanf("%d",&b);
    int c = a * b;
	int d = a * 2 + b * 2;       
	printf("\nDien tich cua hcn = %d\n",c);
	printf("\nChu vi cua hcn = %d\n",d);
	
	//ex2
	int r;
	printf("\nNhap ban kinh hinh tron =");
	scanf("%d",&r);
	int p = 2*3.14*r;
	int s = 3.14*r*r;
	printf("\nChu vi hinh tron = %d\n",p);
	printf("\nDien tich hinh tron = %d\n",s);
	 
	 //ex3
	  int N;
	  printf("\nNhap vao so nguyen N =");
	  scanf("%d",&N);
	   int tong = ((N*(1+N)) )/2;
	   printf("\nTong cac so tu 1 toi N =%d\n",tong);
	    
	return 0;
}
