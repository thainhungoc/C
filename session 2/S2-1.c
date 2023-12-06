#include <stdio.h>
int main(){
    // khai bao gan gia tri bien hinh vuong
    // tinh chu vi,dien tich
    int square =4;
    printf("chu vi hinh vuong la: %d\n", 4*square);
    printf("dien tich hinh vuong la: %d\n", square*square);
    double a=2, b=3, c=4;
    printf("chu vi hinh tam giac la: %.2lf\n",a+b+c);
    double p=(a+b+c)/2;
    double area= sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac la: %.2lf\n", area);
    return 0;

}