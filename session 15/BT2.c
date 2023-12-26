#include<stdio.h>
#include<stdlib.h>
void input(int y, int x);
int main(){
    int y, x;
    input(y, x);
    return 0;
    }
    void input(int y, int x){
       int i, j;
       printf("Nhap so cot: ");
       scanf("%d", &y);
       printf("Nhap so hang: ");
       scanf("%d", &x);
       int *num;
       num= malloc(sizeof(int) *x *y);
       printf("Nhap gia tri tung phan tu: ");
       for(i=0; i<y; i++){
           for(j=0; j<x; j++){
               scanf("%d", &num[i *x + j]);
           }
       }
}
