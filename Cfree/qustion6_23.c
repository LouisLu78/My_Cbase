# include <stdio.h>

# define SIZE 50 



main()
{
	int floor[50][50]={0};
	int order[7]={1,2,3,4,5,6,9};
	int row, column;
	int order=1; step=0;
	
	while (order != 9){
		if (order == 2){
			row=0;
			column=0;
		}
		elif (order == 3){
			colunm += step;
		}
		elif (order == 4){
			colunm -= step;
		}
		elif (order == 5 && step>0){
			row += step;
		}
		elif (order == 6){
			printArray(floor, 50, 50);
		}
	}
	for (i=0; i<50; i++){
        for (j=0;j<50;j++){	
        	printf("%4d",floor[i][j]);
    	}
    	printf("\n");
	}
	return 0;
 } /* to be finished tomorrow */
