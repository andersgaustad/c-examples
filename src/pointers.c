#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 42;
    int * b = &a;
    int at_b = *b;

    printf("Value is %i\n", a);
    printf("Address is %p\n", b);
    printf("Value at address is %i\n", at_b);

    return 0;
}





