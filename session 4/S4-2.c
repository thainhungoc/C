#include <stdio.h>
int main(){
    int a, b, c;
    printf("Nhap so do 3 canh: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b || b==c  || a==c){
        printf("Day la tam giac can\n");
    } else if((a*a+b*b)==c || (b*b+c*c)==a || (a*a+c*c)==b){
        printf("Day la tam giac vuong\n");
    } else if (a==b || b==c || a==c || (a*a+b*b)==c || (b*b+c*c)==a || (a*a+c*c)==b ){
        printf("Day la tam giac vuong can\n");
    } else if (a==b==c){
        printf("Day la tam giac deu\n");
    } else {
        printf("Day la tam giac thuong\n");
    }
    return 0;
}