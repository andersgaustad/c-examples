#include <stdio.h>

int main(int argc, char const *argv[])
{
    const char MODE = 'D';
    switch (MODE)
    {
    case 'D':
        printf("Drive mode activated.\n");
        break;

    case 'R':
        printf("Reverse mode activated.\n");
        break;        
    
    default:
        printf("Unrecognized mode %c detected\n", MODE);
        break;
    }

    return 0;
}

