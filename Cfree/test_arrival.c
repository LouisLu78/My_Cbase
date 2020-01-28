# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define TIME 720


int duration(void);


main()
{
    
    int i, in = 0;
    int arrival[720] = {0};

    srand(time(NULL));


    arrival[0] = duration();

    while(arrival[in] < 720){
        arrival[in+1] = arrival[in] + duration();
        in++;
        }

    for (i = 0; i < 720; i++){
        if (arrival[i] > 0){
            printf("%d-->", arrival[i]);
        }
    }

    return 0;
}

int duration(void)
{
    return 1 + rand() % 4;
}/* This function works properly.*/

