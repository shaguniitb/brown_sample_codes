#include "shared.h"
unsigned int testfn(unsigned int a)
{
    printf("test");
    return a;
}

unsigned int testfn2(unsigned int a, unsigned int b)
{
    printf("test2\n");
    return a + b;
}
