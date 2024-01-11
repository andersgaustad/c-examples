#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char* str1 = "Hello";
    char* str2 = "World";

    size_t length = strlen(str1);

    int equal = strcmp(str1, str2);

    char* new_string = strdup(str1);
    
    return 0;
}



