#include <stdio.h>

int main()
{
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) { 
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
