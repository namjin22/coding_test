#include <stdio.h>
int main(){

    int N, T, P;
    int s[6];
    int sum = 0;

    scanf("%d", &N);

    for(int i = 0; i <= 5; i++) {
        scanf("%d", &s[i]);
    }

    scanf("%d %d", &T, &P);

    for (int i = 0; i <= 5; i++) {
    sum += (s[i] + T - 1) / T;
    }

    printf("%d\n", sum);
    printf("%d %d", N / P, N % P);

}