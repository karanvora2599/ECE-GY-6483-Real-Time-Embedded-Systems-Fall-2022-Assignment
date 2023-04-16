#include <stdio.h>

int main ()
{
    int vals[5] = {4, 3, 2, 5, 1};
    int i;
    for (i=0; i<=5; i++)
    {
        printf("vals[%d]=%d\n", i, vals[i]);
    }
    return 0;
}