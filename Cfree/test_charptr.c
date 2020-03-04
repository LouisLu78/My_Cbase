#include <stdio.h>
#include <ctype.h>

int main()
{
    char *ptr = "Here is Hefei.";

    while (*ptr != '\0' )
    {

        if (isspace(*ptr))
        {
            ptr++;
            continue;
        }
        printf("%c",*ptr++);

    }

    return 0;
}
