# include <stdio.h>

# define SIZE 10



main()
{
	int t[2][5]={0};
	int i, j;
	
	for (i=0; i<2; i++){
		for (j=0; j<5; j++){
			t[i][j]=1;
		}
	}
	
	for (j=0; j<5; j++){
		printf("t[0][%d]= %d\n",j, t[0][j]);
	}
	return 0;
 } 
