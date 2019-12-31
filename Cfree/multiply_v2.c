# include <stdio.h>


main()
{
    int i, j;
    for(i=1;i<10;i++) {
        for(j=1;j<=i;j++) {
            printf("%01d*%01d=%02d   ",j,i,j*i);
        }
        printf("\n");
    } 
    return 0;  
}