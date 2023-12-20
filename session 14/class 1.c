#include <stdio.h>
int main (){
    int* pc, c;
    c=18;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n", c);
    pc=&c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n", *pc);
    c=10;
    printf("Address of poiter pc: %p\n", pc);
    printf("Content of pointer pc: %d\n", *pc);
    *pc = -2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);
    return 0;
}
