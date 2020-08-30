/*prints out numbers and their squares over a given range */
#include <stdio.h> 
 
int square(int x) { 
	int ret = 0; 
 
	// Just add `x` to the return value, `x` times. 
	// Essentially squaring the number without using the multiplication operator. 
	for(int i = 0; i < x; ++i) { 
		printf("%d, ", ret); 
		ret += x; 
	} 
 
	printf("\n"); 
 
	return ret; 
} 
int main(int argc, char** argv) { 
	for(int x = 1; x <= 10; ++x) { 
		printf("  %d^2: %d\n", x, square(x)); 
	} 
	return 0; 
} 