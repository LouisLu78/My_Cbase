# include<stdio.h>

main()
{
    int a, i;
    int sum=0;
    i=0;
    printf("Please enter a number:");
    scanf("%d",&a);
    while(a != 9999){
    	sum += a;
		++i;
        printf("%d %d\n", sum, i);
        printf("Please enter a number:");
    	scanf("%d",&a);
        
	} 
	
    printf("The average of the numbers is %f.", (float)sum / i);
    
    return 0;
    
}
