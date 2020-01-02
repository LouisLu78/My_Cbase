# include<stdio.h>

main()
{
    int i, product;
    product=1;
    for (i=1; i<=15; i+=2){
        product*=i;
        printf("%8d%8d\n",i,product);
    }
    return 0;
}