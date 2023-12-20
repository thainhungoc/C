#include <stdio.h>
void swap(int *n1, int *n2);
int main(){
    int num1=3, num2=7;
    printf("Gia tri truoc khi hoan doi la: \n");
    printf("num1=%d\n", num1);
    printf("num2=%d\n", num2);
    swap(&num1, &num2);
    printf("Gia tri sau khi hoan doi la: \n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}
void swap(int* n1, int* n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}