
#include <stdio.h>

#include "MyFunc.h"

int main()
{
	int n = 5;
	printf("C Entered: %d\n", n);
	int m = MyFunc(n);
	printf("C Got: %d\n", m);
	return 0;
}

