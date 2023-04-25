#include <stdio.h>
#define N 51

int main() {
    int i, j, k;
    char c = 'A';

    if (N%2 == 1) {
        for (i = 0; i < (N/2) + 1; i++)
        {

            for (j = 0; j <= N ; j++)
            {

                if (j == N - 1 - i || j == i)
                {
                    printf("%c", c + i);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else{
        for (i = 0; i < N/2; i++)
        {
            for (j = 0; j <= N; j++) {

                if (j == i || j == (N - i) - 1)
                {
                    printf("%c", c + i);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }


    return 0;
}
