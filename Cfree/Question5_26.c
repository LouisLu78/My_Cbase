# include <stdio.h>
int perfect_num(int N);

int main()
{
	int i, count=0;
	for (i=1;i<=10000;i++){
		if (perfect_num(i)){
			printf("%5d",i);
			count++;
			if (count%10==0){
				printf("\n");
			}
		}
	}
	return 0;
}


int perfect_num(int N)
{
	int i, sum=1;
	
	if (N==1){
		return 1;
	}
	else if (N==2){
		return 0;
	}
	else {
		for (i=2;i<N;i++){
			if (N%i==0){
				sum+=N/i;
			}
		}
		if (sum==N){
			return 1;	
		}
		else {
			return 0;
		} 
	}
	
}
