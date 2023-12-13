#include <stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        printf("Nhap so phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int max=a[0];
    for(int i=1; i<n; i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    int min=a[0];
    for(int i=1; i<n; i++){
        if (min>a[i]){
            min=a[i];
        }
    }
    printf("Gia tri lon nhat cua mang: %d\n", max);
    printf("Gia tri nho nhat cua mang: %d\n", min);
    return 0;
}