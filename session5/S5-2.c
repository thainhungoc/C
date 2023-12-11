#include <stdio.h>
int main(){
    int n;
    printf("Nhap doanh thu ban hang: ");
    scanf("%d", &n);
    if(n<100){
        printf("Hoa hong la 5 phan tram");
    } else if (n<300) {
        printf("Hoa hong la 10 phan tram");
    } else if (n>300){
        printf ("hoa hong la 20 phan tram");
    }
    return 0;
}
