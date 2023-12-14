#include <stdio.h>
int main(){
    int menu[100];
    int n;
    printf("Nhap so phan tu can nhap: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Gia tri cua phan tu %d: ", i+1);
        scanf("%d", &menu[i]);
    }
    int sum=0;
    for (int i=0; i<n; i++){
        if(n%2==0){
            sum += i;
        }
    }
    printf("Tong cac so chan la: %d", sum);
    return 0;
}