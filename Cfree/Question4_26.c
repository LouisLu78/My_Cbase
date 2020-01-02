# include<stdio.h>

main()
{
    int i=1, count=1;
    int k=1, j;
    float sum=0.0;
    
    for (j=1;j<100;j++) {
        sum += (4.0/count);
        i += 2;
        k *= -1; 
        count = i*k;
        printf("%6d %f\n", j,sum);
    }
    return 0;
}
