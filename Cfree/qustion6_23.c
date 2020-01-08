# include <stdio.h>

# define SIZE 50 

void printArray(int a[50][50]);


main()
{
	int floor[SIZE][SIZE]={0};
	
	int row0=0, column0=0; 
	int row, column, width, height;
	int order, count_R=0, count_L=0;
	int i, j, step;	
	
	while (order != 9){
		printf("Please input your number of order:");
		scanf("%d", &order);
		
		if (order == 2){
			width = 1;
			height = 0;
			count_R++;
		}
		
		else if (order == 3){
			if (count_R%4 == 0){
				width = 1;
				height = 0;
			}
			else if(count_R%4 == 1){
				width = 0;
				height = 1;
			}
			else if(count_R%4 == 2){
				width = -1;
				height = 0;
			}
			else{
				width = 0;
				height = -1;
			}
			count_R++;
		}
		
		else if (order == 4){
			if (count_L%4 == 0){
				width = -1;
				height = 0;
			}
			else if(count_L%4 == 1){
				width = 0;
				height = 1;
			}
			else if(count_L%4 == 2){
				width = 1;
				height = 0;
			}
			else{
				width = 0;
				height = -1;
			}
			count_L++;
		}
		
		else if ( order == 5 ){
			printf("Please input again with your number of step:");
			scanf("%d", &step);
			row = row0 + height * step;
			column = column0 + width * step;
			for (i = row0; i <= row; i++){
        		for (j = column0; j <= column; j++){	
        			floor[i][j] = 1;
        		}
        	}
        	row0 = row;
        	column0 = column;
    	}
			
		else if (order == 6){
			printArray(floor);
		}
		
	}
	for (i = 0; i < 50; i++){
        for (j = 0; j < 50; j++){
        	printf("%d ",floor[i][j]);
    	}
    	printf("\n");
	}
	
	return 0;
 } 
 
 void printArray(int a[50][50])
 {
 	int i, j;
 	
 	for (i = 0; i < 50; i++){
        for (j = 0; j < 50; j++){
        	if (a[i][j] == 1){
        		printf("*");
			}
			else if (a[i][j] == 0){
        		printf(" ");
			}
		}
		printf("\n");
	}
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
