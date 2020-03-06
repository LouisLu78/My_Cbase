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

    char ca = '0', cb = '9';

    printf("%d\n", ca);
    printf("%d\n", cb);

    int a = 56;
    printf("%c", a);

    return 0;
}
