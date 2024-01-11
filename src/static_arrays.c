#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array_1[5];
    array_1[0] = 42;
    array_1[1] = 12;
    printf("First: %i\n", array_1[0]);

    int array_2[] = {1, 1, 2, 4, 8};

    for (size_t i = 0; i < 5; i++)
    {
        printf("i=%lu: %i\n", i, array_2[i]);
    }

    return 0;    
}

