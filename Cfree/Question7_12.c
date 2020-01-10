# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define CARD 5

void select(int wDeck[][13]);
int test_pair(const int c[CARD]);

main()
{
	const char *suit[4] = {"Heart", "Diamond", "Club", "Spade"};
	const char *face[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	int deck[4][13] = {0}, chosen[5]={0};
	int row, column, pair, count = 0;
	
	srand(time(NULL));
	
	select(deck);
	
	for (row = 0; row < 4; row++){
	    for (column = 0; column < 13; column++){
	        if (deck[row][column] > 0){
	            chosen[count] = column;	            
	            /*printf("%d %d\n", count, chosen[count]);*/	            
	            printf("%s of %s\n", suit[row], face[column]);
	            count++;
	        }
	    }
	}
	
	pair = test_pair(chosen);
	if (pair){
	    printf("We have found %d pair(s).", pair);
	}
	else{
		printf("The selected cards contain no pair.");
	}
	return 0;
}

void select(int wDeck[][13])
{
	int row, column, cardNumber = 1;
	
	while (cardNumber <= 5){
		row = rand() % 4;
		column = rand() % 13;
		if (wDeck[row][column] == 0){
			wDeck[row][column] = cardNumber;
			cardNumber++;
		} 
	}
}

int test_pair(const int c[5])
{
    int i, j, pair=0;
    for (i = 0; i < 4; i++){
        for (j = i+1; j < 5; j++){
            if (c[i] == c[j]){
                pair ++;
                
            }
        }
    }
    return pair;
}












