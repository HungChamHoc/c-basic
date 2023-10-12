#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct tranhtheu_st{
	char ten[30],tacgia[30];
	int chieudai,chieurong,giaban,dientich;
}tranhtheu;
void showMenu();
void input(tranhtheu dsTranh[3]);
void sort(tranhtheu dsTranh[3]);
void display(tranhtheu dsTranh[3]);
void find(tranhtheu dsTranh[3]);
void saveFile(tranhtheu dsTranh[3]);
int main(int argc, char *argv[]) {
	tranhtheu dsTranh[3];
	int choose;
	do{
		showMenu();
		fflush(stdin);fflush(stdout);
		scanf("%d",&choose);
		
		switch(choose){
			case 1:{
				input(dsTranh);
				break;
			}
			case 2:{
				sort(dsTranh);
				display(dsTranh);
				break;
			}
			case 3:{
				find(dsTranh);
				break;
			}
			case 4:{
				saveFile(dsTranh);
				break;
			}
			case 5:{
				printf("\nThoat!");
				break;
			}
			default :{
				printf("\nChon sai !!!");
				break;
			}
		}
	}while(choose !=5);
	
	return 0;
}
void showMenu(){
	printf("\n1.Nhap danh sach cac buc tranh");
	printf("\n2.Sap xep,thong ke va hien thi thong tin chi tiet cua tung buc tranh theo dien tich giam dan");
	printf("\n3.Tim buc tranh co theo gia ban");
	printf("\n4.Ghi vao tap tin tranhtheu.txt");
	printf("\n5.Thoat!");
	printf("\nChon :");
}
void input(tranhtheu dsTranh[3]){
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap thong cho buc tranh so %d",i+1);
		printf("\nTen :");
		fflush(stdin);fflush(stdout);
		gets(dsTranh[i].ten);
		printf("\nTac gia :");
		fflush(stdin);fflush(stdout);
		gets(dsTranh[i].tacgia);
		printf("\nChieudai :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&dsTranh[i].chieudai);
		printf("\nChieurong :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&dsTranh[i].chieurong);
		printf("\nGia ban :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&dsTranh[i].giaban);
	}
}
void sort(tranhtheu dsTranh[3]){
	int i,j,tmp;
	int dientich[3];
	for(i=0;i<3;i++){
		dientich[i] = dsTranh[i].chieudai * dsTranh[i].chieurong;
		printf("\nDien tich tranh %d = %d",i+1,dientich[i]);
	}
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
		if(dientich[i] < dientich[j]){
			tmp = dientich[i];
			dientich[i] = dientich[j];
			dientich[j] = tmp;
		}
			
	}
}
void display(tranhtheu dsTranh[3]){
	int i;
	for(i=0;i<3;i++){
		printf("\nBuc tranh so %d",i+1);
		printf("\nTen : %s",dsTranh[i].ten);
		printf("\nTac gia : %s",dsTranh[i].tacgia);
		printf("\nChieu dai : %d",dsTranh[i].chieudai);
		printf("\nChieu rong : %d",dsTranh[i].chieurong);
		printf("\nGia ban : %d",dsTranh[i].giaban);
	}
}
void find(tranhtheu dsTranh[3]){
	
}
void saveFile(tranhtheu dsTranh[3]){
}
