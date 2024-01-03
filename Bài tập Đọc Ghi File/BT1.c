#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* tu(char *s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

char *ten(char *s, char *res){
    char *token = strtok(s, " ");
    while(token != NULL){
        strcat(res, tu(token));
        token = strtok(NULL, " ");
        if(token != NULL){
            strcat(res, " ");
        }
    }
    return res;
}

int main(){
    FILE *in;
    in = fopen("sv.txt", "r");
    if(in == NULL){
        printf("Không tìm thấy tệp tin!\n");
    }
    else{
        FILE *out;
        out = fopen("svOut.txt", "w");
        int n;
        fscanf(in, "%d", &n);
        fprintf(out, "%d\n", n);
        fgetc(in);
        char name[100], s[100];
        for(int i = 0; i < n; i++){
            fgets(s, 100, in);
            s[strlen(s) - 1] = '\0';
            fprintf(out, "%s\n", ten(s, name));
            strcpy(name, "");
        }
        fclose(in);
        fclose(out);
        printf("Chuan hoa ten sinh vien va loai bo cac dau cach thua giua ten sinh vien trong file `sv.txt` thanh cong!\n");
    }
    return 0;
}
