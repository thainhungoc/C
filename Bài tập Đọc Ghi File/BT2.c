#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_lenght 100
struct sinhvien {
    char ten[max_lenght];
    char lop[max_lenght];
    char ngaySinh[50];
    float gpa;
};

void bubbleSort(struct sinhvien arr[], int n) {
    struct sinhvien temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++) {
            if(arr[j].gpa < arr[j+1].gpa) {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    FILE *fp, *fp_out;
    struct sinhvien arr[max_lenght];
    int i=0;
    fp=fopen("sinhvien.txt","r");
    while(fscanf(fp, "%[^,],%[^,],%[^,],%f\n", arr[i].ten, arr[i].lop, arr[i].ngaySinh, &arr[i].gpa) !=EOF) {
        i++;
    }
    fclose(fp);
    bubbleSort(arr, i);
    fp_out = fopen("sinhvien_out.txt","w");
    for(int j=0; j<i; j++) {
        fprintf(fp_out, "%s, %s, %s, %.2f\n ", arr[j].ten, arr[j].lop, arr[j].ngaySinh, arr[j].gpa);
    }
    fclose(fp_out);
    printf("Da sap xep lai danh sach sinh vien theo GPA giam dan vao file sinhvien_out.txt. \n");
    return 0;
}