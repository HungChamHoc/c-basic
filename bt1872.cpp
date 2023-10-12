#include <stdio.h>

int main(){
	int a1,a2,a3,a4;
	printf("\na1 =");
	scanf("%d",&a1);
	printf("\na2 =");
	scanf("%d",&a2);
	printf("\na3 =");
	scanf("%d",&a3);
	printf("\na4 =");
	scanf("%d",&a4);
	
	int max,min;
    max = a1;
	min = a1;
	if(a2>max){
		max = a2; 
	} else if(a2<min){
		min = a2; 
	} 
	if(a3>max){
		max = a3; 
	} else if(a3<min){
		min = a3; 
	} 
	if(a4>max){
		max = a4; 
	} else if(a4<min){
		min = a4; 
	} 
	printf("\nSo nguyen lon nhat = %d",max);
	printf("\nSo nguyen nho nhat = %d",min); 
	
	return 0;
}
