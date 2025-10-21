#include <stdio.h>
#include <string.h>
int main() {
    
    char P[6];
    while (1) {
        scanf("%s", P);
        if (strcmp(P, "0") == 0){
            break;
        }
        
        int len = strlen(P);
        int is_pal = 1;

        for (int i = 0; i < len / 2; i++) {
            if (P[i] != P[len - i - 1]) {
                is_pal = 0;
                break;
            }
        }

        if (is_pal)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}