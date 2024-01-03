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
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAX_LEN 100
//
//int main() {
//    FILE *fp_in, *fp_out;
//    char line[MAX_LEN];
//    char *token;
//    int sv, i;
//
//    fp_in = fopen("sv.txt", "r");
//    fp_out = fopen("svOut.txt", "w");
//
//    if (fp_in == NULL || fp_out == NULL) {
//        printf("khong mo file duoc.\n");
//        exit(1);
//    }
//
//    // Read the number of students
//    fgets(line, MAX_LEN, fp_in);
//    sv = atoi(line);
//
//    // Write the number of students to the output file
//    fprintf(fp_out, "%d\n", sv);
//
//    // Process each student name
//    for (i = 0; i < sv; i++) {
//        fgets(line, MAX_LEN, fp_in);
//
//        // Remove trailing newline character
//        line[strcspn(line, "\n")] = 0;
//
//        // Tokenize the name and remove extra spaces
//        token = strtok(line, " ");
//        while (token != NULL) {
//            fprintf(fp_out, "%c%s ", toupper(token[0]), token + 1);
//            token = strtok(NULL, " ");
//        }
//        fprintf(fp_out, "\n");
//    }
//
//    fclose(fp_in);
//    fclose(fp_out);
//
//    printf("Xong!\n");
//
//    return 0;
//}
