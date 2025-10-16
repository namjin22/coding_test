#include <stdio.h>
int main() {
    int N, x;
    int count[10001] = {0};

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &x);
        count[x]++;
    }
    for(int i = 1; i < 10001; i++) {
        for(int j = 0; j < count[i]; j++) {
            printf("%d\n", i);
        }
    }
}