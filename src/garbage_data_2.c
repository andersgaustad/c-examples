#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {10, 20, 30, 40, 50};
    size_t length = 
        sizeof(array) / sizeof(array[0]);
    
    for (size_t i = 0; i < 10; i++)
    {
        const char* s = i < length
            ? "OK"
            : "OUT OF RANGE"; 
        int data = array[i];
        printf("i=%lu %s: %i\n", i, s, data);
    }

    return 0;
}
