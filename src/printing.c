#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 32;
    float b = 1.5;
    char* c1 = "Hello";
    char* c2 = "World";

    printf(
        "A: %i, B: %f, C: %s %s\n",
        a,
        b,
        c1,
        c2
        );

    return 0;
}
