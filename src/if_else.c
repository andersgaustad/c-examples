#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int MY_NUMBER = 42;
    if (MY_NUMBER == 30)
    {
        printf("Number is 30!\n");
    }
    else if (MY_NUMBER > 30)
    {
        printf("Number is more than 30!\n");
    }
    else {
        printf("Number is less than 30!\n");
    }

    return 0;
}
    