#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student_st {
	char name[30],province[30];
	int year;
} student;
void showMenu();
void input(student studentList[3]);
void sort(student studentList[3]);
void display(student studentList[3]);
void min(student studentList[3]);
void find(student studentList[3]);
void saveFile(student studentList[3]);	
int main(int argc, char *argv[]) {
	student studentList[3];
	int choose;
	do{
		showMenu();
		fflush(stdin);fflush(stdout);
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				input(studentList);
				break;
			}
			case 2:{
				sort(studentList);
				display(studentList);
				break;
			}
			case 3:{
				min(studentList);
				break;
			}
			case 4:{
				find(studentList);
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				printf("\nThoat!");
				break;
			}
			default:{
				printf("\nChon sai !!!");
				break;
			}
				
		}
		
	}while(choose !=6);
	return 0;
}
void showMenu(){
	printf("\n1.Nhap du lieu cua tung sinh vien");
	printf("\n2.Sap xep va hien thi thong tin chi tiet cua tung sinh vien theo thu tu tang dan cua ho ten");
	printf("\n3.Tim sinh vien co tuoi nho nhat");
	printf("\n4.Tim sinh vien theo tinh");
	printf("\n5.Luu thong tin vao file student.txt");
	printf("\n6.Thoat");
	printf("\nChon :");
}
void input(student studentList[3]){
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap ten sinh vien %d:",i+1);
	    fflush(stdin);fflush(stdout);
	    gets(studentList[i].name);
	    printf("\nNhap tinh :");
	    fflush(stdin);fflush(stdout);
	    gets(studentList[i].province);
	    printf("\nNhap nam sinh :");
	    scanf("%d",&studentList[i].year);   
	}
}
void sort(student studentList[3]){
	int i,j,cmp;
	student tmp;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			cmp = strcmp(studentList[i].name,studentList[j].name);
			if(cmp > 0){
				tmp = studentList[i];
				studentList[i] = studentList[j];
				studentList[j] = tmp;
			}
		}
	}
}
void display(student studentList[3]){
	int i;
	for(i=0;i<3;i++){
		printf("\nSinh vien %d",i+1);
		printf("\nHo ten : %s",studentList[i].name);
		printf("\nTinh thanh : %s",studentList[i].province);
		printf("\nNam sinh : %d",studentList[i].year);
	}
}
void min(student studentList[3]){
	int max,i;
	max = studentList[0].year;
	if(studentList[1].year > max){
		max = studentList[1].year;
	}
	if(studentList[2].year > max){
		max = studentList[2].year;
	}
	for(i=0;i<3;i++){
		if(studentList[i].year == max){
			printf("\nSinh vien co tuoi nho nhat la ");
			printf("\nSinh vien %d",i+1);
		    printf("\nHo ten : %s",studentList[i].name);
		    printf("\nTinh thanh : %s",studentList[i].province);
		    printf("\nNam sinh : %d",studentList[i].year);
		}
	}
	
}
void find(student studentList[3]){
	char s[20];
	printf("\nNhap tinh :");
	fflush(stdin);fflush(stdout);
	gets(s);
	int i,cmp,isFind = 0;
	for(i=0;i<3;i++){
		cmp = strcmp(studentList[i].province,s);
		if(cmp == 0){
			if(isFind == 0){
				printf("\nSinh vien thuoc tinh nay la :");
			}
			printf("\nSinh vien %d",i+1);
		    printf("\nHo ten : %s",studentList[i].name);
		    printf("\nTinh thanh : %s",studentList[i].province);
		    printf("\nNam sinh : %d",studentList[i].year);
		    
		    isFind = 1;
		}
	}
	if(isFind == 0){
		printf("\nKhong tim thay sinh vien nao thuoc tinh nay");
	}
}
void saveFile(student studentList[3]){
    FILE *fp;
    fp = fopen("student.txt","w");
    if(ferror(fp)){
    	printf("\nFile is error");
	}else{
		fwrite(studentList,sizeof(student),3,fp);
	}
	fclose(fp);
}
