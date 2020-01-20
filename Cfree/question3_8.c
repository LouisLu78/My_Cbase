# include<stdio.h>

main()
{
    int x, y;
    int i=1;
    int power=1;
    printf("Please input two numbers:"); 
    scanf("%d%d", &x, &y);
    while (i <= y){
        power *= x;
        ++i;
    }
    printf("The result is %d.", power);
    return 0;
}

