#include <stdio.h>

int main() {
    int K, num;
    int stack[100000];
    int top = 0;

    scanf("%d", &K);

    for (int i = 0; i < K; i++) {
        scanf("%d", &num);
        if (num == 0) {
            if (top > 0) {
                top--;
            }
        }
        else {
            stack[top++] = num;
        }
    }

    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += stack[i];
    }
    printf("%d", sum);
}