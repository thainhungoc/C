#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    do {
        printf("Nhap vao mot so bat ki: ");
        scanf("%d", &n);
        if (n>0){
            sum += n;
        }
    } while (n>0);
    printf("sum=%d", sum);
}