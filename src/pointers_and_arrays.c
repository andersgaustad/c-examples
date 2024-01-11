#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {
        10, 20, 30, 40, 50,
        60, 70, 80, 90, 100
    };
    int * ptr = array;
    for (size_t i = 0; i < 10; i++)
    {
        printf(
            "i=%lu: %p\n", 
            i,
            (ptr + i)
            );
    }
    return 0;
}
