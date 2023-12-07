#include <stdio.h>
int main() {
    double old, new, tien;
    printf("Nhap chi so cong to dien dau thang: ");
    scanf("%lf", &old);
    printf("Nhap chi so cong to dien cuoi thang: ");
    scanf("%lf", &new);
    tien = new - old;
    if (tien >= 0 && tien < 50) {
        printf("Tien dien tieu thu trong thang la 10000");
    } else if (tien >= 50 && tien < 100) {
        printf("Tien dien tieu thu trong thang la 15000");
    } else if (tien >= 100 && tien < 150) {
        printf("Tien dien tieu thu trong thang la 20000");
    } else if (tien >= 150 && tien < 200) {
        printf("Tien dien tieu thu trong thang la 25000");
    } else if (tien > 200) {
        printf("Tien dien tieu thu trong thang la 30000");
    }
    return 0;
}
