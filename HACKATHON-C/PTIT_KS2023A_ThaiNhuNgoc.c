#include <stdio.h>
#include <stdbool.h>
bool soNguyenTo(int n){
    if(n<2){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if (n%2==0){
            return false;
        }
    }
    return true;
}

void inMang(int n, int m, int mang[n][m]){
    printf("Mang la: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d  ", mang[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int soLeChiaHetCho5(int n, int m, int mang[][m]) {
    int so = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mang[i][j] % 2 != 0 && mang[i][j] % 5 == 0) {
                so++;
            }
        }
    }
    return so;
}

void cheoPhuTangDan(int n, int m, int mang[][m]) {
    int cheoPhu[100];
    int a = 0;

    for (int i = 0; i < n; i++) {
        cheoPhu[a++] = mang[i][m - 1 - i];
    }

    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int temp = mang[i][n - i - 1];
        while (j >= 0 && mang[j][n - j - 1] > temp) {
            mang[j + 1][n - j - 2] = mang[j][n - j - 1];
            j--;
        }
        mang[j + 1][n - j - 2] = temp;
    }

    a = 0;
    for (int i = 0; i < n; i++) {
        mang[i][m - 1 - i] = cheoPhu[a++];
    }
}
void nhapMangMotChieu(int mang1[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("mang1[%d]", i);
        scanf("%d", &mang1[i]);
    }
}

void sapXepGiamDanTheoDong(int n, int m, int mang[n][m]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (mang[i][j] < mang[i][k]) {
                    int temp = mang[i][j];
                    mang[i][j] = mang[i][k];
                    mang[i][k] = temp;
                }
            }
        }
    }
    printf("Mảng sau khi sắp xếp giảm dần theo dòng là:\n");
    inMang(n, m, mang);
}

void tinhTongCacSoNguyenTo(int n, int m, int mang[n][m]){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(soNguyenTo(mang[i][j])){
                sum+=mang[i][j];
            }
        }
    }
    printf("Tong cac so nguyen to trong mang la:%d\n", sum);
}

void phanTuLonNhatNhoNhat(int n, int m, int mang[n][m]) {
    int max = mang[0][0], min = mang[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                if (mang[i][j] > max) {
                    max = mang[i][j];
                }
                if (mang[i][j] < min) {
                    min = mang[i][j];
                }
            }
        }
    }
    printf("Max: %d\n Min: %d\n", max, min);
}


void chenMangMotChieuVaoMangHaiChieu(int n, int m, int mang[][100], int mang1[], int chen) {
    for (int i = 0; i < n; i++) {
        for (int j = m; j > chen; j--) {
            mang[i][j] = mang[i][j - 1];
        }
        mang[i][chen] = mang1[i];
    }
}
void inMenu(){
    printf("\n==================================================MENU==================================================\n");
    printf("1. Nhap gia tri cac phan tu cua mang\n");
    printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
    printf("3. Tinh so luong cac phan tu le chia het cho 5 trong mang\n");
    printf("4. In ra cac phan tu co gia tri lon nhat, nho nhat tren duong bien, duong cheo chinh, duong cheo phu\n");
    printf("5. Su dung thuat toan sap xeo lua chon sap xep cac phan tu giam gian theo dong cua mang\n");
    printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
    printf("7. Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan \n");
    printf("8. nhap gia tri mot mang 1 chieu gom n phan tu va chi so cot muon chen vao mang\n");
    printf("9. Thoat\n");
    printf("=========================================================================================================\n");
}
int main() {
    int n, m, num;
    int mang[100][100];
    int mang1[100];
    do {
        inMenu();
        printf("Chon chuc nang tu 1 den 9:");
        scanf("%d", &num);
        switch (num) {
            case 1:
                printf("Nhap do dai mang:");
                scanf("%d", &n);
                printf("Nhap so phan tu: ");
                scanf("%d", &m);
                for (int i = 0; i < n; i++) {
                    for (int j; j < m; j++) {
                        printf("Nhap phan tu thu [%d][%d]:",i , j);
                        scanf("%d", &mang[i][j]);
                    }
                }
                break;
            case 2:
                inMang(n, m, mang);
                break;
            case 3:
                printf("So le chia het cho 5 la: %d\n", soLeChiaHetCho5(n, m, mang));
                break;
            case 4:
                phanTuLonNhatNhoNhat(n, m, mang);
                break;
            case 5:
                printf("Mang sap xeo giam dan theo dong:\n");
                sapXepGiamDanTheoDong(n, m, mang);
                break;
            case 6:
                printf("Tong cac so nguyen to la: %d\n");
                tinhTongCacSoNguyenTo(n, m, mang);
                break;
            case 7:
                printf("Sap xep duong cheo phu tang dan:\n");
                cheoPhuTangDan(n, m, mang);
                inMang(n, m, mang);
                break;
            case 8:
                printf("Do dai mang 1 chieu: ");
                scanf("%d",&n);
                int chenCot;
                printf("Nhap cot muon chen: ");
                scanf("%d", &chenCot);
                chenMangMotChieuVaoMangHaiChieu(n, m, mang,mang1, chenCot);
                printf("Mang sau khi chen la: \n");
                inMenu(n, m, mang);
                break;
            case 9:
                printf("Thoat chuong trinh  \n");
                break;
            default:
                printf(" Nhap chuc nang khong dung. Vui long nhap lai.\n");
        }
    } while (num != 9);
    return 0;
}