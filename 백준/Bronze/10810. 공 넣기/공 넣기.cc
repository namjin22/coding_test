#include <stdio.h>
int main() {
    int N, M, i, j, k;
    int B[101] = {0};
    
    scanf("%d %d", &N, &M);
    
    for(int a = 0; a < M; a++) {
        scanf("%d %d %d", &i, &j, &k);
        
        for(int b = i; b <= j; b++) {
            B[b - 1] = k;
        }
        
    }
    
    for(int c = 0; c < N; c++) {
        printf("%d ", B[c]);
    }
}