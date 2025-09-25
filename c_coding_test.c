#include <stdio.h>
int main(){

    int t;
    int N[1001];
    int sum = 0;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &N[i]);
    }

    sum = N[0];

    for(int i = 0; i < t; i++){
        if(sum < N[i]){
            sum = N[i];
        }
    }

    for (int i = 0; i < t; i++){
        N[i] = (N[i] / sum) * 100;
        sum += N[i];
    }

    printf("%f", (float)sum / t);
}