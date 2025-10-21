

// global.c
#include <stdio.h>

int result;


int Sum(int x, int y) {
	result = x + y;
	
}

int main() {


	int a = 3, b = 5;

	Sum(a, b);
	printf(" % d + % d = % d\n", a, b, result);


	return 0;
}