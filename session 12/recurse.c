#include <stdio.h>
int main(){
    int sum(int);
    int number, result;
    printf("Nhap vao so :");
    scanf("%d", &number);
    result = sum(number);
    printf("sum=%d", result);
    return 0;
}
int sum(int n){
    if(n<=1){
        return 0;
    } else if (n%2==0){
        return n +sum(n-2);
    } else {
        return n+sum(n-1);
    }
