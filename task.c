#include <stdio.h>

int main() {
	int x = 1234;
	int *p = (int *)x;
    
	*p = 42;
	printf("*p = %d\n", *p);
    
	return 0;
}

