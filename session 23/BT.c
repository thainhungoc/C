#include<stdio.h>
#define max_lenght 100
struct city{
    char name[max_lenght];
    int income;
    int population;
    float literacyRate;
}ct[max_lenght];
int main(){
    int i, n, mi, ml, maxIncome, maxLiteracyRate;
    float rate;
    mi=ml=-1;
    maxIncome = maxLiteracyRate = 0;
    printf("\nNhap so thanh pho: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Nhap thanh pho thu %d:\n ", i+1);
        printf("Nhap ten thanh pho: ");
        scanf("%s", &ct[i].name[max_lenght]);
        printf("Nhap tong thu nhap: ");
        scanf("%d", &ct[i].income);
        printf("Nhap tong so dan: ");
        scanf("%d", &ct[i].population);
        printf("Nhap ti le biet doc, biet viet: ");
        scanf("%f", &ct[i].literacyRate);
    }
    for(i=0; i<n; i++){
        if(ct[i].income > maxIncome){
            maxIncome = ct[i].income;
            mi++;
        }
        if(ct[i].literacyRate > maxLiteracyRate){
            maxLiteracyRate = ct[i].literacyRate;
            ml++;
        }
    }
    printf("\nThanh pho co tong thu nhap cao nhat: %d", ct[mi].income);
    printf("\nThanh pho co ti le biet doc-viet cao nhat: %fl", ct[ml].literacyRate);


    return 0;
}