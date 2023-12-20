#include<stdio.h>

int str_ln(char*);

int main() {
    char str[20];
    int length;

    printf("\nNhap chuoi bat ky: ");
    gets(str);

    length = str_ln(str);
    printf("\nDo dai chuoi %s la: %d", str, length);
    return(0);
}

int str_ln(char*p)
{
    int i = 0;
    while (*p != '\0') {
        i++;
        p++;
    }
    return i;
}