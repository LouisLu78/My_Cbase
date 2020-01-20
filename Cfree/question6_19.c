# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define LIMIT 1000000

int rollDice(void);

main()
{
	int i, sum;
	int possibility[11] = {0};
	int frequency[11] = {0};
	srand(time(NULL));
	
	for (i=0; i<11; i++){
		possibility[i]=i+2;	
	}
	
	for (i=0; i<LIMIT; i++){
		sum=rollDice();
		++frequency[sum-2];
	}
	
	printf("%s%17s\n","possibility","frequency");
	
	for (i=0; i<11; i++){
		printf("%11d%17d\n", possibility[i],frequency[i]);
	}
	
	return 0;	
	
}

int rollDice(void)
{
	int N1, N2;
	
	N1=1+rand()%6;
	N2=1+rand()%6;		
	
	return N1+N2;
	
 } 
