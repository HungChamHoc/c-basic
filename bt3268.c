#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N;
void showMenu(){
	printf("\n1.Nhap vao so nguyen N");
	printf("\n2.Tinh N!");
	printf("\n3.Tinh tong tu 1->N");
	printf("\n4.So sanh N! va tong 1->N");
	printf("\n5.Thoat!");
	printf("\nChon :");
}
void input(){
	printf("\nNhap vao so nguyen N:");
	scanf("%d",&N);
}
int giaiThua(int n){
	int i;
	int tich=1;
	if(n == 0){
		return 1;
	}
	for(i=1;i<n+1;i++){
			tich*=i;
		}
	return tich;
}
int tinhTong(int n){
	int i;
	int sum=0;
	for(i=1;i<n+1;i++){
		sum+=i;   
	}
	return sum;
}
int sosanh(){
	int x,y;
	x = giaiThua(N);
	y = tinhTong(N); 
	if(x > y){
		return -1; 
	} else if(x<y){
		return 1; 
	}else{
		return 0; 
	} 
    

}


int main(int argc, char *argv[]) {
	int choose;
	int result;
	do{
		showMenu();
		fflush(stdin);fflush(stdout);
		scanf("%d",&choose);
		
		switch(choose){
			case 1: {
				input();
				break;
			}
			case 2: {
				input(); 
				result = giaiThua(N);
				printf("\nN! = %d",result);
				break;
			}
			case 3: {
				input(); 
				result = tinhTong(N);
				printf("\nTong tu 1 den N = %d",result);
				break;
			}
			case 4:{
				input(); 
				result = sosanh();
				if (N >= 0) {
                    if(result == -1){
                    	printf("\nN! > Tong tu 1->N");
					}else if(result == 1){
						printf("\nN! < Tong tu 1->N");
					}else{
						printf("\nN! = Tong tu 1->N");
					}
                } else {
                    printf("\nNhap sai! N phai >= 0.");
                }
				break;
			}
			case 5:{
				printf("Thoat!");
				break;
			}
			default: {
				printf("\nNhap sai !!!");
				break;
			}
		}
	}while(choose !=5);
	
	return 0;
}
