#include <stdio.h>

size_t factorial(size_t x);

int main(int argc, char const *argv[])
{
    const size_t result = factorial(5);
    printf("Result: %lu\n", result);

    return 0;    
}

size_t factorial(size_t x)
{
    if (x <= 1) return 1;

    return x * factorial(x - 1);
}





