#include <stdio.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    int day = (V - A) / (A - B);  
    if ((V - A) % (A - B) != 0) { 
        day++;
    }
    day++;

    printf("%d", day);
}
