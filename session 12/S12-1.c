#include <stdio.h>
int hieu(int x, int y){
    return (x>y)?(x-y):(y-x);
}
int sum(int m, int n){
    return m+n;
}
int main (){
    int a, b, c;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf ("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);
  //  sum1 = a+b;
  //  sum2 = b+c;
  //  sum2 = c+a;
  //  hieu1 = (a>b)?(b-a):(a-b);
  //  hieu2 = (b>c)?(b-c):(c-b);
  //  hieu3 = (c>a)?(c-a):(a-c);
   printf ("%d + %d = %d\n", a, b, sum(a, b));
    printf ("%d + %d = %d\n", b, c, sum(b, c));
    printf ("%d + %d = %d\n", c, a, sum(c, a));
    printf("%d - %d = %d\n", (a>b)?a:b, (a>b)?b:a, hieu(a, b));
    printf("%d - %d = %d\n", (b>c)?b:c, (b>c)?c:b, hieu(b, c));
    printf("%d - %d = %d\n", (c>a)?c:a, (c>a)?a:c, hieu(c, a));
    return 0;
}