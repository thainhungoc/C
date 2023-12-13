#include <stdio.h>
int main(){
    int toan, van, anh;
    printf("Diem toan: ");
    scanf("%d",&toan);
    printf("Diem van: ");
    scanf("%d", &van);
    printf("Diem tieng anh: ");
    scanf("%d", &anh);
    float tb=(toan+van+anh)/3;
    printf("Diem trung binh: %.2f\n", tb);
    float tong=(toan+van+anh);
    printf("Diem tong: %.2f", tong);
    return 0;


}
