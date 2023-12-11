#include <stdio.h>
int main(){
    int mth,day;
    printf("Hay nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Hay nhap thang sinh: ");
    scanf("%d", &mth);
    if ((day>=21 && mth==3) || (day<=20 && mth==4)) {
        printf("Day la cung Bach Duong");
    } else if ((day>=21 && mth==4)||(day<=20 && mth==5)){
        printf("Day la cung Kim Nguu");
    } else if ((day>=21 && mth==5)|| (day <=21 && mth==6)){
        printf("Day la cung Song Tu");
    } else if ((day>=22 && mth==6)||(day<=22 && mth==7)){
        printf("Day la cung Cu Giai");
    } else if ((day>=23 && mth==7)||(day<=22 && mth==8)){
        printf("Day la cung Su Tu");
    } else if ((day>=23 && mth==8)||(day<=22 && mth==9)){
        printf("Day la cung Xu Nu");
    } else if ((day>=23 && mth==9)||(day<=23 && mth==10)){
        printf("Day la cung Thien Binh");
    } else if ((day>=24 && mth==10)||(day<=22 && mth==11)){
        printf("Day la cung Bo Cap");
    } else if ((day>=23 && mth==11)||(day<=21 && mth==12)){
        printf("Day la cung Nhan Ma");
    } else if ((day>=22 && mth==12)||(day<=19 && mth==1)){
        printf("Day la cung Ma Ket");
    } else if ((day>=20 && mth==1)||(day<=18 && mth==2)){
        printf("Day la cung Bao binh");
    } else if ((day>=19 && mth==2)||(day<=20 && mth==3)){
        printf("Day la cung Song Ngu");
    }
    return 0;
}

