# include <stdio.h>

int hanoi(int N, int start, int temp, int target);

int main()
{
	int N;
	N=3;
	hanoi(N, 1, 2, 3);
	return 0;
}


int hanoi(int N, int start, int temp, int target)
{
	
	int c;
	
	
	if (N==1){
		printf("d%->d%", start, target);
	}
	
	else {
		printf("d%->d%", hanoi(N-1, start, temp, target), target);
		printf("d%->d%", hanoi(N-1, start, temp, target), temp);
		printf("d%->d%", start,target);
		printf("d%->d%", hanoi(N-1, start, temp, target), start);
		printf("d%->d%", hanoi(N-1, start, temp, target), target);	
		c=start;
		start=target;
		target=c;	
		
	}
	
}
