#include <stdio.h>
int main(){
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Nhap so phan tu hang %d cot %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum=0;
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("so chan: %d", a[i][j]);
            sum += a[i][j];
            printf("\n");
        }
    }
    printf("Tong : &d", sum);
    return 0;
}