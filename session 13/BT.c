#include<stdio.h>

int strlen(char*);

int main() {
    char str[20];
    int length;

    printf("\nNhap chuoi bat ky: ");
    gets(str);

    length = strlen(str);
    printf("\nDo dai chuoi %s la: %d", str, length);
    return(0);
}

int strlen(char*p)
{
    int i = 0;
    while (*p != '\0') {
        i++;
        p++;
    }
    return i;
}
