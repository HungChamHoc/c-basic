#include <stdio.h>

void showInfor(){
	printf("\nHo va ten : Le Tuan Hung");
	printf("\nTuoi : 21");
	printf("\nDia chi : Hai Phong");
	printf("\nEmail : tuanhungpkh@gmail.com");
	printf("\nSdt : 0768750928");
}
void showMessage(int msg){
	printf("\nHello %d",msg);
}
void giaithua(int n){
	int i ;
	int t = 1 ;
	for(i=1;i<=n;i++){
		t*=i;
	}
	printf("\n N giai thua = %d",t);
}
void tinhtong(int m){
	int i;
	int sum = 0;
	for(i = 0;i<=m;i++){
		sum+=i;
	}
	printf("\nTong tu 1 den m = %d", sum);
}
int main(){
	showInfor();
	showMessage(5);
	showMessage(9);
	showMessage(88);
	giaithua(5);
	tinhtong(10);
	return 0;
}
