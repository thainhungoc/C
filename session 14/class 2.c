#include <stdio.h>
void add(int* p1, int* p2){
    (*p1) += 2;
    (*p2) += 3;
}
int main(){
    int* pa, a=5;
    int* pb, b=6;
    pa=&a;
    pb=&b;
    add(pa, pb);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}