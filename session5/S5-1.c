#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, n;
    printf("Nhap vao 3 so a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    n= (b*b)-4*a*c;
    if (a==0){
        printf("Nhap so a > 0\n");
    }
    if (n<0){
        printf("Phuong trinh vo nghiem");
    }
    if (n==0){
        float x= -b/(2*a);
        printf("x= %.2f ", x);
    }
    if (n>0){
        float x1 = (-b+sqrt(n))/(2*a);
        float x2 = (-b-sqrt(n))/(2*a);
        printf("x1=%.2f\n", x1);
        printf("x2= %.2f", x2);
    }
    return 0;
}