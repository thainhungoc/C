#include<stdio.h>
#include<stdbool.h>

bool fibonacci(int n){
    int a=0, b=1, c=a+b;
    if(n==0) return true;
    while(c<n){
        a=b;
        b=c;
        c=a+b;
    }
    return c==n;
}

int main(){
    int n,m;
    printf("Nhap so cot: ");
    scanf("%d", &n);
    printf("nhap so dong: ");
    scanf("%d", &m);
    int a[n][m];
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            scanf("%d", &a[n][m]);
        }
    }
    printf("\n");
    printf("day so fibonacci: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(fibonacci(a[n][m])) {
                printf("%d", a[n][m]);
            }
        }
    }
    return 0;
}