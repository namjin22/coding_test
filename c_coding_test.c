#include <stdio.h>
int main(){

    int t, v;
    int n[101];
    int sum = 0;

    scanf("%d", &t);

    for(int a = 0; a < t; a++) {
        scanf("%d", &n[a]);
    }

    scanf("%d", &v);

    for(int b = 0; b < t; b++) {
        if(n[b] == v) {
            sum++;
        }
    }
}