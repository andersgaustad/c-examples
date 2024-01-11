#include <stdio.h>

int main(int argc, char const *argv[])
{
    char* str = "Hello";
    printf("Using printf : %s\n", str);

    printf("Printing manually : ");
    char * ptr = str;
    while (*ptr != '\0')
    {
        putchar(*ptr);
        ptr += 1;
    }
    putchar('\n');
    
    return 0;
}

