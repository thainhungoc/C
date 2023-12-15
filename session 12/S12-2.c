#include <stdio.h>
int integer(float x) {
    return (x == (int)x);
}
void nhan(int x, int y) {
    int tich = x*y;
    if (integer(tich)) {
        printf("%d * %d = %d\n", x, y, tich);
    } else {
        printf("Chi tra ve so nguyen %d * %d\n", x, y);
    }
}
void chia(int x, int y) {
    if (y!=0 && x%y==0) {
        int thuong = x/y;
        printf("%d / %d = %d\n", x, y, thuong);
    } else {
        printf("%d / %d khong chia het\n", x, y);
    }
}
int main() {
    // Nhập từ bàn phím 3 số a, b, c
    int a, b, c;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);
    nhan(a, b);
    nhan(b, c);
    nhan(c, a);
    chia(a, b);
    chia(b, c);
    chia(c, a);
    return 0;
}