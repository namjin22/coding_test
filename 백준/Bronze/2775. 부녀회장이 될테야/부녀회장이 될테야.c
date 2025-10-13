#include <stdio.h>
int main() {
    int T, t, f, r, n, i, p, s;
    scanf("%d", &T);

    for(t = 0; t < T; t++) {
        scanf("%d %d", &f, &r);
        int a[r+1];
        for(i = 1; i <= r; i++) a[i] = i;

        for(n = 1; n <= f; n++) {
            p = 0;
            for(i = 1; i <= r; i++) {
                p += a[i];
                a[i] = p;
            }
        }
        printf("%d\n", a[r]);
    }
}