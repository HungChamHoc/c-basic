#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char student[3][7];
	int i,j;
	printf("\nNhap thong tin sinh vien\n");
	for(i=0;i<3;i++){
		for(j=0;j<7;j++){
			scanf("%c",&student[i][j]);
		}
	}
	printf("%c",student[3][7]);
	return 0;
}
