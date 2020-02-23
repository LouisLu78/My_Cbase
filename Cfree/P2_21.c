#include <stdio.h>

int main()
{
    int i, sum = 0;
    for(i = 0; i < 10; i++){
        sum += i;
    }
    printf("Sun from 0 to %d is %d.", i, sum);

    return 0;
}
