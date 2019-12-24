# include <stdio.h>
# include <string.h>
# include <conio.h>

int main(void){
    unsigned char i,j;
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            if(i>=j)
            printf("%01d*%01d=%02d   ",j,i,j*i);
        }
        printf("\n");
    }
    getch();
}