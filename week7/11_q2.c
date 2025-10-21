#include <stdio.h>

int result;
void Test() {

	int result = 5;
	result++;
}


void main() {

	Test();
	printf("result = %d\n", result);

	
}