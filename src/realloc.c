#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int in = 5;

    int * mem = (int*) calloc(in, sizeof(int));
    
    int extra_element = 42;

    mem = (int*) realloc(mem, (in + 1) * sizeof(int));
    mem[5] = extra_element;

    free(mem);
    
    return 0;
}

