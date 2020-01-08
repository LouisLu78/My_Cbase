# include <stdio.h>

main()
{
	long value2, value1 = 200000;
	long *lPtr;
	
	lPtr = &value1;
	printf("%ld\n", *lPtr);
	value2 = *lPtr;
	printf("%ld\n", value2);
	printf("%p\n", &value1);
	printf("%p\n", lPtr);
	
	return 0;
}

  
