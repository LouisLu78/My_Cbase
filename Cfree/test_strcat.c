# include <stdio.h>
# include <string.h>

main()
{
    int i;
    char infix[] = {'(','3','+','5',')','*','4','-','2','^','5','/','8'};

    strcat(infix, ")");

    for (i = 0; infix[i] != '\0'; i++){
        printf("%c",infix[i]);
    }

    return 0;
}
