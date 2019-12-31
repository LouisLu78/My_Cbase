# include<stdio.h>
main ()
{
    int x, y, z, result;
    printf("Please input three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    result = x*y*z;
    printf("The product of the three numbers is %d.", result);
    return 0;

}