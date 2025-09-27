#include <stdio.h>

int main() {
    int t;
    int N[1001];
    int max = 0;
    double num = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &N[i]);
        if (N[i] > max) max = N[i];
    }

    for (int i = 0; i < t; i++) {
        num += (N[i] / (double)max) * 100;
    }

    printf("%f", num / t);
}