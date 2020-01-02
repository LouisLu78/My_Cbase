# include<stdio.h>

main()
{
    int i, j, k;
    int counter=0;

    for (i=1; i<=500; i++){
        for (j=1;j<=500;j++){
            for (k=1;k<=500;k++){
                if (i+j>k && i<j && i*i+j*j==k*k){
                    counter++;
					printf("%d %d %d %d \n",counter, i, j, k);
                    
                }
            }

        }
    }
    return 0; 
}
