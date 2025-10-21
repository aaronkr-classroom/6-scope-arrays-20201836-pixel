#include <stdio.h>

void Test() {
	static int data = 0;
	printf("data = %d\n", data++);
}

void main()
{
	int i;
	for (i = 0; i < 5; i++)
		Test();

}