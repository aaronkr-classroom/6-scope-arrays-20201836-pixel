#include <stdio.h>



int Sum(int x, int y) {
	int result = x + y;
	return result;
}

int main() {


	int a = 3, b = 5;

	int result = Sum(a, b);
	printf(" % d + % d = % d\n", a, b, result);


	return 0;
}