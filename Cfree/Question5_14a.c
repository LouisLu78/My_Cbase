# include <stdio.h>
# include <stdlib.h>
# include <time.h>

main()
{
	int N, i;
	srand(time(NULL));
	for (i=1; i<=100; i++){
		N=(1+rand()%5)*2;
		printf("%4d ",N);
		if (i%10==0){
			printf("\n");
		}
	} 
	
	return 0;
	
 } 
