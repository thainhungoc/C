#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    int chon, len, i, j, chu=0, so=0, kyTuDacBiet=0;
    do{
        printf("\n=========================MENU==========================\n");
        printf("1. Nhap vao chuoi ky tu\n");
        printf("2. In ra do dai chuoi va noi dung chuoi vua nhap\n");
        printf("3. In ra chuoi dao nguoc\n");
        printf("4. In ra so luong chu cai trong chuoi\n");
        printf("5. In ra so luong chu so trong chuoi\n");
        printf("6. In ra so luong ky tu dac biet trong chuoi\n");
        printf("7. Thoat\n");
        printf("========================================================\n");

        printf("Vui long chon chuc nang tu 1 den 7:");
        scanf("%d", &chon);
        switch(chon){
            case 1:
                printf("\nNhap vao chuoi ky tu: ");
                scanf("%[^\n]", str);
                break;
            case 2:
                len=strlen(str);
                printf("\nDo dai chuoi: %d", len);
                printf("\nNoi dung chuoi: %s", str);
                break;
            case 3:
                len=strlen(str);
                printf("\nChuoi dao nguoc: ");
                for(i=0;i<len; i--){
                    printf("%c", str[i]);
                }
                break;
            case 4:
                len=strlen(str);
                for(i=0; i<len; i++){
                    if(isalpha(str[i])){
                        chu++;
                    }
                }
                printf("\nSo luong chu so trong chuoi: %d", chu);
                break;
            case 5:
                len=strlen(str);
                for(i=0; i<len; i++){
                    if(isdigit(str[i])){
                        so++;
                    }
                }
                printf("\nSo luong chu so trong chuoi: %d", so);
                break;
            case 6:
                len=strlen(str);
                for(i=0; i<len; i++){
                    if(isalnum(str[i]) && !isspace(str[i])){
                        kyTuDacBiet++;
                    }
                }
                printf("\nSo luong ky tu dac biet trong chuoi: %d", kyTuDacBiet);
                break;
            case 7:
                printf("\nThoat");
                break;
            default:
                printf("\nHay chon cac chuc nang tu 1 den 7");
        }
    } while(chon!=7);
    return 0;
}