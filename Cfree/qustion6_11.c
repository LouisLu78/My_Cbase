# include <stdio.h>

# define SIZE 10

int main()
{
	int a[SIZE]={2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int i, j, k;
	int temp;
	int flag=0;
	for (i=0; i<SIZE-1; i++){
		for (j=0; j<SIZE-1-i; j++){
			if (a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag=1;
			}
		}
		if (flag==0){
			break;
		}
		for (k=0; k<SIZE; k++){
		printf("%d ", a[k]);
		}		
		printf("\n");
		flag=0;
	
	}
	return 0;
}
