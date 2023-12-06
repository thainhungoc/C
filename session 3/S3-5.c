#include <stdio.h>
int main() {
    int a, b, c, d;
    int dao;
    printf("nhap 4 so: ");
    scanf("%d", &dao);
    a = dao / 1000;
    b = (dao / 100) % 10;
    c = (dao % 100) / 10;
    d = dao % 10;
    printf("tong: %d\n", a + b + c + d);
    printf(" so nghich dao: %d%d%d%d", d, c, b, a);
    return 0;
}
