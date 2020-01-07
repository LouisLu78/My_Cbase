# include <stdio.h>

# define SIZE 20 

int check_num(const int data[], int len, int key);

main()
{
	int a[SIZE]={0};
	
	int i=0;
	int k, number, signal;
	
	while (i<SIZE){
		printf("Please enter the number: ");
		scanf("%d", &number);
		if (number>=10 && number<=100){
			a[i]=number;
			signal=check_num(a, i, number);					
			if (signal == 1){
			printf("%d\n",number);
			}
			i++;
		}
		
	}
	for (k=0; k<SIZE; k++){
		printf("%d ", a[k]);
		}	
	return 0;
 } 
 
int check_num(const int data[], int len, int key)  
{
 	int i;
 	int flag=1;
 	for (i=0; i<len; i++){
 		if (key == data[i]){
 			flag=0;
 			break;
		}
	}	
	return flag;
 	
}
