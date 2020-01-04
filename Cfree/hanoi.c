# include <stdio.h>

void hanoi(int N, char start, char temp, char target);

int main()
{
	int N;
	N=3;
	char a, b, c;
	hanoi(N, a, b, c);
	return 0;
}


void hanoi(int N, char start, char temp, char target)
{
	
	if (N==1){
		printf("c%->c%\n", start, target);
		return;
	}
	
	else {
		hanoi(N-1, start, target, temp);
		printf("c%->c%\n", start, target);
		hanoi(N-1, temp, start, target);
		
	}
	
}
