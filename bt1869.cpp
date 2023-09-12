#include<stdio.h>

int main() {
	char rollno[16]="BA11-047";

int age=21;

char name[50]="Le Tuan Hung";

char address[200]="Hai Phong";
printf("\n=====================================\n");
printf("\n|Ten          | Tuoi | Ma SV    | Dia chi    | \n");
printf("|%s |%d    |%s  |%s   |",name,age,rollno,address);
printf("\n=====================================\n");
	return 0;
}
