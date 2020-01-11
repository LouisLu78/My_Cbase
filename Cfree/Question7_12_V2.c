# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define CARD 5

struct card {
    const char *suit;
    const char *face;
};

typedef struct card Poker;

void select(Poker *wDeck, const char *wFace[], const char *wSuit[]);
int test_pair(const int c[CARD]);

main()
{
    Poker deck[CARD];
    const char *suit[4] = {"Heart", "Diamond", "Club", "Spade"};
	const char *face[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	int i; 
	srand(time(NULL));

	select(deck, face, suit);
	for (i = 0; i < CARD; i++){
	    printf("%s of %s\n",deck[i].suit, deck[i].face);
	}


	return 0;
}

void select(Poker wDeck[], const char *wFace[], const char *wSuit[])
{
    int i;
    for (i = 0; i < CARD; i++){
        wDeck[i].face = wFace[rand() % 13];
        wDeck[i].suit = wSuit[rand() % 4];
    }

}
