#include <stdio.h>
int main(){
    
     int time;
     int sum = 0;
     scanf("%d", &time);
     
     for(int i = 0; i < time; i++) {

        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        sum = (N % H) * 100 + (N / H + 1);
         
        if(N % H == 0){
            sum = H * 100 + (N / H);
        }
        printf("%d\n", sum);
     }
}