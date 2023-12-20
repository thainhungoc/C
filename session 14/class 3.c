#include <stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int* x=a;
    //*x=a;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += *(x+i);
    }
    printf("Tong cac phan tu trong mang la: %d ", sum);
    return 0;
}
