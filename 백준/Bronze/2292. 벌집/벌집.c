#include <stdio.h>
int main() {
    int N = 0;
    int a = 6;
    int sum = 1;
    
    scanf("%d", &N);
    
    while (N > 1) {
        N = N - a;
        a = a + 6;
        sum++;
    }
    
    printf("%d", sum);
}