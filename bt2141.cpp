#include <stdio.h>
#include <stdlib.h>

 void cal (float a,float b){
 	float x = a + b;
 	float y = a - b;
 	float z = a * b;
 	float i = a / b;
 	printf("\na + b = %f",x);
 	printf("\na - b = %f",y);
 	printf("\na * b = %f",z);
 	printf("\na / b = %f",i);
 }
 
 int main(){
 	cal(1.4,2.8);
 	return 0;
 }
