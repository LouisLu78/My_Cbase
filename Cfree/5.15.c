# include <stdio.h>
# include <math.h>

double hypotenuse(double a, double b);

int main()
{
	int i;
	double a, b;

	for (i=1; i<=3; i++){
		
		printf("please enter the length of a and b: ");
		scanf("%lf %lf", &a, &b);
		printf("The length of c is %.2f.\n", hypotenuse(a, b));
	}	
	return 0;	
 } 
 
 double hypotenuse(double a, double b)
 {
 	return sqrt(a*a+b*b);
  } 
