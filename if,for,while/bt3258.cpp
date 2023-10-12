#include <stdio.h>

int main(){
	//ex1
/*
	int n;
	printf("\nNhap n ");
	scanf("%d",&n);
	if(n % 2 ==0){
		printf("\nn la so chan");
	} else{
		printf("\nn la so le");
	}
	if(n % 2 ==0 && n % 7 ==0){
		printf("\nn chia het cho 2 va 7");
	}else if(n % 7 ==0){
		printf("\nn chia het cho 7");
	}else if(n % 2 ==0){
		printf("\nn chia het cho 2");
	}
	if(n != 0 && n != 1 && (n == 2 || n % 2 !=0) && (n == 3 || n % 3 != 0) && (n ==5 || n % 5 != 0)){
		printf("\nn la so nguyen to");
	}else{
		printf("\nn khong la so nguyen to");
	}
	//ex2
	int a,b;
	printf("\nNhap a =");
	scanf("%d",&a);
	printf("\nNhap b =");
	scanf("%d",&b);
	int sum = 0;
	if(a <=b){
		for(;a<=b;a++){
			sum +=a;
		}
		printf("\nTong cac phan tu giua a va b = %d",sum);
	}else{
		for(;a>=b;b++){
			sum +=b;
		}
		printf("\nTong cac phan tu giua a va b = %d",sum);
	}
	
	int i;
	int n;
	int sum = 0;
	printf("\nNhap n =");
    scanf("%d",&n);
    printf("\nCac so nguyen to tu 1 den n la\n"); 
    for(i=2;i<=n;i++){
    	if((i == 2 || i % 2 !=0) && (i == 3 || i % 3 != 0) && (i ==5 || i % 5 != 0)) {
    		printf("\n%d",i); 
    		sum+=i; 
		}
	} 
		printf("\nTong cac so nguyen to tu 1 den n = %d",sum); 
		*/
		//ex3
	int i;	
	int t[10];
	for(i=0;i<10;i++){
		printf("\nNhap t[%d]=",i);
		scanf("%d",&t[i]); 
	}
	int sum =0;
	for(i=0;i<10;i++){
		sum+=t[i]; 
	}	 
	printf("\nTong cac phan tu trong t[10] = %d",sum);
	 
	return 0; 
} 
