#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[20];
	int length;
	length = sizeof(str); 
	printf("\nDo dai cua chuoi = %d",length);
	char str2[10];
	printf("\nNhap str :"); 
	gets(str); 
	printf("\nNhap str2 :");
	gets(str2); 
	strcat(str,str2);
	printf("\nDo dai cua chuoi str = %d",strlen(str));
	char str3[20];
	printf("\nNhap str3 :");
	gets(str3);
	int i;
	for(i=0;i<20;i++){
		printf("\n%c\n",str3[i]); 
	} 
	return 0;
}
