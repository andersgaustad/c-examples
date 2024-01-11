#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 32;
    int b = 64;
    int c;
    int d = 2;

    c = a;
    a = a + b - c;
    int result = a / d;

    printf("Result: %i\n", result);

}



