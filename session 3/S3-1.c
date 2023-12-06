#include <stdio.h>
int main(){
   float r;
   float PI=3.14;
   printf("Hay nhap r: ");
   scanf("%f", &r);
   printf("Chu vi hinh tron: %.2f\n", 2*PI*r);
   printf("Dien tich hinh tron: %.2f",PI*r*r);
   return 0;
}