#include <stdio.h>
int main() {
    int N, M, i, j;
    int num[101] = {0};
    int sum = 0;
    scanf("%d %d", &N, &M);
    for(int p = 0; p < N; p++) {
        num[p] = p + 1;
    }
    for(int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j);
        sum = num[j - 1];
        num[j - 1] = num[i - 1];
        num[i - 1] = sum;
    }
    for(int q = 0; q < N; q++) {
        printf("%d ", num[q]);
    }
}