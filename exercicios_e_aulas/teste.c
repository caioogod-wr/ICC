#include<stdio.h>

void intercalado(int a[], int b[], int n, int m){
    int s = n + m;
    int c[s];

    int contA = 0; 
    int contB = 0;
    int contC = 0;
    
    while(contC < s){
        if((a[contA] <= b[contB] && contA < n) || (contB == m)){
            c[contC] = a[contA];
            contA++;
        }else{
            c[contC] = b[contB];
            contB++;
        }
        contC++;
    }
    for(int i = 0; i < s; i++){
        printf("%d ", c[i]);
    }
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];

    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }

    intercalado(a, b, n, m);
}