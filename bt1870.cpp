#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    printf("Nhap gia tri a: ");
    scanf("%lf", &a);
    
    printf("Nhap gia tri b: ");
    scanf("%lf", &b);
    
    printf("Nhap gia tri c: ");
    scanf("%lf", &c);
    
    double delta = b * b - 4 * a * c;
    
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Phuong trinh co 1 nghiem:\n");
        printf("x = %lf\n", x);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }
    
    return 0;
}

