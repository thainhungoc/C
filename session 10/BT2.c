#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num<2) {
        return 0;
    }
    for (int i=2; i<=sqrt(num); i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Cac so nguyen to trong khoang tu %d den %d la:\n", a, b);
    for (int i=a; i<=b; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
