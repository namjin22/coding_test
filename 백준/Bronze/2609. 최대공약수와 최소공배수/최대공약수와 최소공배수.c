#include <stdio.h>
int main() {
    int a, b, h = 0, l = 0;
    scanf("%d %d", &a, &b);
    if(a < b) {
        for(int i = 1; i <= a; i++) {
            if(a % i == 0 && b % i == 0) {
                h = i;
            }
}
    }
    else {
        for(int i = 1; i <= a; i++) {
            if(a % i == 0 && b % i == 0) {
                h = i;
            }
        }
    }
    l = (a * b) / h;
    printf("%d\n%d", h, l);
}