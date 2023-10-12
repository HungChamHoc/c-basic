#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct ST_Rectangular{
	float dientich;
	float chieudai;
	float chieurong; 
} hcn; 

int main(int argc, char *argv[]) {
	hcn	list[5];
	int i;
	for(i=0;i<5;i++){
		printf("\Rectangular %d",i+1);
		printf("\nNhap chieu dai =");
		fflush(stdin);fflush(stdout);
		scanf("%f",&list[i].chieudai);
		printf("\nNhap chieu rong =");
		fflush(stdin);fflush(stdout);
		scanf("%f",&list[i].chieurong); 
	} 
	float sum = 0; 
	for(i=0;i<5;i++){
		list[i].dientich = list[i].chieudai * list[i].chieurong ;
		printf("\nDien tich HCN %d = %f",i+1,list[i].dientich);	 
	} 
	for(i=0;i<5;i++){
		sum+=list[i].dientich; 
	} 
	printf("\nTong dien tich 5 HCN = %f",sum); 
	return 0;
}
