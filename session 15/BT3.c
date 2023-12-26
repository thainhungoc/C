#include<stdio.h>
#include<math.h>
int soNguyenTo(int n);
for(int i=2; i<sqrt(n); i++){
    if(n % i == 0){
        return false;
    }
    return n>1;
 }
int main(){
    int n, m;
    int a[n][m];
    printf("Nhap so cot: ");
    scanf("%d", &n);
    printf("Nhap so dong: ");
    scanf("%d", &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Mang vua nhap: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int res = 0, cot = -1;
    for(int i = 0; i < m; i++){
        int dem = 0;
        for(int j = 0; j < n; j++){
            if(soNguyenTo(a[j][i])){
                ++dem;
            }
        }
        if(dem >= res){
            res = dem; cot = i;
        }
    }
    printf("Cot %d co nhieu so nguyen to nhat\n", cot);
    printf("So luong so nguyen to o cot %d : %d\n", cot, res);
    return 0;
}