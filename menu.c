#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ST_Student{
	char name[20];
	int age[20];
	char address[20];
} Student;
void showMenu(){
	printf("\n1.Them N sinh vien");
	printf("\n2.Hien thi thong tin sinh vien");
	printf("\n3.Sap xep theo ten tu A-Z");
	printf("\n4.Thoat!");
}
int main(int argc, char *argv[]) {
	int choose;
	do{
		showMenu();
		fflush(stdin);fflush(stdout);
		scanf("%d",&choose);
		
		switch(choose){
			case 1:{
				int N;
              	printf("\nNhap N =");
	            scanf("%d",&N);
	            Student stdList[N];
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				printf("\nThoat !")
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
		
	}while(choose!=4);
	return 0;
}
