#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int * a = (int*) calloc(1, sizeof(int));
    *a = 42;

    free(a);
    //free(a);    // <- Double free
    
    return 0;
}






