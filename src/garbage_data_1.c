#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 42;
    int * ptr = &a;
    int legal = ptr[0];     // = *ptr
    int illegal = ptr[9];   // = *(ptr + 9)

    printf("Legal : %i\n", legal);
    printf("Garbage : %i\n", illegal);

    return 0;

}




