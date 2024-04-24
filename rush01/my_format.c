#include <stdlib.h>

char    *my_format(char *input)
{
    char                *output;
    char                i;

    output = (char *)malloc(16);
    i = 0;
    while(i < 3)
    {
        while(i < 5)
        {
            output[i] = input[j];
            output[i + 1] = input[i + 8];
            i += 2;
        }
        i += 8;
    }
}

char pos_mf(char i, char j)
{
    return(i * 2 + j);
}
