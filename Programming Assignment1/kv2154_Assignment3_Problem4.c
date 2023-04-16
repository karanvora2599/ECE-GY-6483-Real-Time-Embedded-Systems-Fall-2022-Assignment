#include <stdio.h>
#include <stdint.h>

struct DemoStruct
{
    unsigned int Integer1, Integer2, Integer3, Integer4;
};

int zero_structs(DemoStruct DemoStructPointer, int ArrayLength)
{
    int i;
    struct DemoStruct DemoStructArray[ArrayLength];
    for(i = 0; i < ArrayLength; i++)
    {
        *DemoStructPointer.Integer1 = 0;
        *DemoStructPointer.Integer2 = 0;
        *DemoStructPointer.Integer3 = 0;
        *DemoStructPointer.Integer4 = 0;

        DemoStructArray[i].Integer1 = *DemoStructPointer.Integer1;
        DemoStructArray[i].Integer2 = *DemoStructPointer.Integer2;
        DemoStructArray[i].Integer3 = *DemoStructPointer.Integer3;
        DemoStructArray[i].Integer4 = *DemoStructPointer.Integer4;
    }
    return DemoStructArray[ArrayLength];
}

int main()
{
    int i, ArrayLength = 1;
    struct DemoStruct Demo, *DemoStructPointer;
    DemoStructPointer = &Demo;
    
    struct DemoStruct DemoStructCatchArray;
    DemoStructCatchArray[ArrayLength] = zero_structs(DemoStructPointer, ArrayLength);
    for(i = 0; i < ArrayLength; i++)
    {
        printf("First element on index %d of DemoStruct Array = %u\n", i, DemoStructCatchArray[i].Integer1);
        printf("First element on index %d of DemoStruct Array = %u\n", i, DemoStructCatchArray[i].Integer2);
        printf("First element on index %d of DemoStruct Array = %u\n", i, DemoStructCatchArray[i].Integer3);
        printf("First element on index %d of DemoStruct Array = %u\n\n", i, DemoStructCatchArray[i].Integer4);
    }

    return 0;
}