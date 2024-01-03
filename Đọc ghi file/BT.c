#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* chuanHoaTu(char *s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

char *chuanHoaTen(char *s, char *res){
    char *token = strtok(s, " ");
    while(token != NULL){
        strcat(res, chuanHoaTu(token));
        token = strtok(NULL, " ");
        if(token != NULL){
            strcat(res, " ");
        }
    }
    return res;
}

int main(){
    FILE *in;
    in = fopen("sinhvien.txt", "r");
    if(in == NULL){
        printf("File not found !\n");
    }
    else{
        FILE *out;
        out = fopen("sinhvien_out.txt", "w");
        int n;
        fscanf(in, "%d", &n);
        fprintf(out, "%d\n", n);
        fgetc(in);
        char name[100], s[100];
        for(int i = 0; i < n; i++){
            fgets(s, 100, in);
            s[strlen(s) - 1] = '\0';
            fprintf(out, "%s\n", chuanHoaTen(s, name));
            strcpy(name, "");
        }
        fclose(in);
        fclose(out);
    }
    return 0;
}