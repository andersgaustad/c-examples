#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int in = 5;

    int * mem = (int*) calloc(in, sizeof(int));
    for (int i = 0; i < in; i++)
    {
        mem[i] = i;
        printf("Allocated %i at %p\n", i, (mem + i));
    }

    free(mem);
    
    return 0;
}

