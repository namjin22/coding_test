#include <stdio.h>
int main() {
    int N, M;
    int C[100001];
    int num = 0;
    int i, j, k;
    int hi = 0;
    
    scanf("%d %d", &N, &M);
    
    for(int a = 0; a < N; a++) {
        scanf("%d ", &C[a]);
    }
    
    for (i = 0; i < N - 2; i++) {
        for (j = i + 1; j < N - 1; j++) {
            for (k = j + 1; k < N; k++) {
                num = C[i] + C[j] + C[k];
                if (num <= M && num > hi) {
                    hi = num;
                }
             }
        }
    }
    printf("%d", hi);
    

    
}