#include <stdio.h>
#include <string.h>

int main() {
    char FB[3][9];
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        scanf("%s", FB[i]);

        if(FB[i][0] >= '0' && FB[i][0] <= '9') {
            sum = atoi(FB[i]);
        }
        else if(strcmp(FB[i], "Fizz") == 0) {
            sum++;
            
            while(sum % 3 != 0 || sum % 5 == 0) {
                sum++;
            }
            
        }
        else if(strcmp(FB[i], "Buzz") == 0) {
            sum++;
            
            while(sum % 5 != 0 || sum % 3 == 0) {
                sum++;
            }
        }
        else if(strcmp(FB[i], "FizzBuzz") == 0) {
            sum++;
            
            while(sum % 15 != 0) {
                sum++;
            }
        }
    }

    int num = sum + 1;

    if(num % 15 == 0) {
        printf("FizzBuzz\n");
    }
    else if(num % 3 == 0) {
        printf("Fizz\n");
    }
    else if(num % 5 == 0) {
        printf("Buzz\n");
    }
    else {
        printf("%d\n", num);
    }
}
