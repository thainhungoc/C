#include <stdio.h>
int main(){
    int number;
    printf("Hay nhap so: ");
    scanf("%d", &number);
    if(number%3 ==0 && number%5 ==0) {
    printf("So nay chia het cho 3 va 5 ");
    } else {
        printf("So nay khong chia het cho 3 va 5 ");
    }
}
