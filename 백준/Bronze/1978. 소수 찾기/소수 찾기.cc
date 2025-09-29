#include <stdio.h>
int main(){

    int N, s;
    int count = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &s);
        for (int j = 2; j <= s; j++)
        {
            if(s == j) {
                count++;
            }
            if (s % j == 0) {
                break;
            }
        }
    }
    printf("%d", count);
}