#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int MY_NUMBER = 42;

    const int even = MY_NUMBER % 2 == 0;
    const bool large = MY_NUMBER > 42;

    if (even)
        printf("%i is even.\n", MY_NUMBER);

    if (large)
        printf("%i is large.\n", MY_NUMBER);
    
    return 0;
}

