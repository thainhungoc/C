#include<stdio.h>

#define MAX_LENGTH 100

//cách 1: Khởi tạo kiểu cấu trúc sinhVien sử dụng struct
struct sinhVien{
    char *name[MAX_LENGTH];
    int age;
    char gender;
    int height;
    int weight;
};

//cách 2: sử dụng typedef
typedef struct {
    char name[MAX_LENGTH];
    int age;
    char gender;
    double height;
    double weight;
}sv;


int main(void){


    //Truy cập vào các thành viên trong cấu trúc
    //cách 1: Sử dụng dấu chấm .
    struct sinhVien Phu;
    Phu.name= "NHTPhu";
    Phu.age =18;
    Phu.gender ='M';
    Phu.height =180;
    Phu.weight =80;
    printf("Info cua phu: Name- %s tuoi-%d chieucao-%d cannang-%d", Phu.name, Phu.age, Phu.gender, Phu.height, Phu.weight);
    return 0;
}
