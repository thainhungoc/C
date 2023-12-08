#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    while(n>0){
        sum += n % 10; //a+=b là a=a+b
        // i = 10
        // n = i++ : n = 10 - i = 11
        //n = ++i : i = 11 - n=11
        n /= 10;
    }
    printf("sum = %d", sum);
}
