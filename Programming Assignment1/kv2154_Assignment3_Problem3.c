#include <stdio.h>
#include <stdint.h>

int even_sum(int pointer, int array);

int main()
{
    struct DemoStruct
    {
        unsigned int Integer1, Integer2, Integer3, Integer4;
    };

    struct DemoStruct DemoStructArray[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        DemoStructArray[i].Integer1 = i;
        DemoStructArray[i].Integer2 = i+2;
        DemoStructArray[i].Integer3 = i+4;
        DemoStructArray[i].Integer4 = i+6;
    }
    
    //Print The Struct

    for(i = 0; i < 5; i++)
    {
        printf("First element on index %d of DemoStruct Array = %u\n", i, DemoStructArray[i].Integer1);
        printf("First element on index %d of DemoStruct Array = %u\n", i, DemoStructArray[i].Integer2);
        printf("First element on index %d of DemoStruct Array = %u\n", i, DemoStructArray[i].Integer3);
        printf("First element on index %d of DemoStruct Array = %u\n\n", i, DemoStructArray[i].Integer4);
    }
    
    return 0;
}