# include <stdio.h>

void hanoi(int N, char start, char temp, char target);

int main()
{
	int N;
	N = 10;
	char a = 'A', b = 'B', c = 'C';
	hanoi(N, a, c, b);

	return 0;
}


void hanoi(int N, char start, char target, char temp)
{

	if (N == 1){
		printf("%c--->%c\n", start, target);
		return;
	}

	else {
		hanoi(N-1, start, temp, target);
		printf("%c--->%c\n", start, target);
		hanoi(N-1, temp, target, start);
	}

}
