#include "shared.h"
unsigned int testfn2(unsigned int a, unsigned int b)
{
    printf("test2\n");
    return a + b;
}

unsigned int testfn(unsigned int a)
{
    printf("test\n");
    return a;
}

int main2()
{
    printf("in main2\n");
    return 0;
}

int main()
{
    printf("in main\n");
    return 0;
}
