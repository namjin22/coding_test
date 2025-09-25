#include <stdio.h>
int main(){

    int t;
    int N[1001];
    int sum = 0;
    double num = 0;

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
        N[i] = (N[i] / (double)sum) * 100;
        num += N[i];
    }

    printf("%f", num / t);
}