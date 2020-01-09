# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define SIZE 8 


main()
{
	int floor[SIZE][SIZE]={0};
	int horizental[] = {2,1,-1,-2,-2,-1,1,2};
	int vertical[] = {-1,-2,-2,-1,1,2,2,1};
	
	int count = 0; 
	int currentRow = 3, currentColumn = 4, moveNumber;
	int targetRow, targetColumn;
	
	printf("Please enter your target Row): ");
	scanf("%d", &targetRow);
	printf("Please enter your target Column: ");
	scanf("%d", &targetColumn);
	srand(time(NULL));
	
	while (1){
		moveNumber = rand()%8;
		currentRow += vertical[moveNumber];
		currentColumn += horizental[moveNumber];
		if (currentRow < 0 || currentRow >7 || currentColumn <0 || currentColumn >7 ){
			continue;
		}
		
		if (currentRow == targetRow && currentColumn == targetColumn){
			printf("You have reached the target spot with %d steps.", count);
			break;
		}
						
		if (floor[currentRow][currentColumn] == 1){
			continue;
		}
		floor[currentRow][currentColumn] = 1;	
		printf("(%d, %d) ",currentRow, currentColumn);	
		count++;
		
	}	
		
	return 0;
 } 
 
 
 
 
 
 
 
