# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void select(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]);

main()
{
	const char *suit[4] = {"Heart", "Diamond", "Club", "Spade"};
	const char *face[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	int deck[4][13] = {0};
	
	srand(time(NULL));
	
	select(deck);
	for (row = 1; row < 5; row++){
		
	}
	
	return 0;
}

void select(int wDeck[][13])
{
	int row, column, card;
	
	for (card = 1; card <=5; card++){
		row = rand() % 4£»
		column = rand() % 13;
		if (wDeck[row][column] == 0){
			wDeck[row][column] = card;
		} 
	}
}/* to be finished tomorrow */
