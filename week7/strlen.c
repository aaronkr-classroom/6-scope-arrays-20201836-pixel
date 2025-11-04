#include <stdio.h>
//c언어에서 strlen()함수는 이미 있기때문에
//우리는 다른 함수 이름 작성

#include <string.h> //strlen(), strcpy(), strcat()

int string_length(char data[]) {
	int count = 0;
	while (data[count]) count++;

	return count;

}





int main() {
	
	
	int data_length, str_length;
	char data[10] = { 'h', 'a', 'p', 'p','y' };
	data_length = string_length(data);
	str_length = strlen(data);

	printf("data length = %d\n", data_length);
	printf("str length = %d\n", str_length);

	char data2[10] = { 'a', 'b', 'c', 0, };
	char result[100];

	
	printf("Result: %s\n", result);
	strcpy_s(result, sizeof(result), data2); //result = abc
	printf("Result(cpy): %s\n", result);
	strcat_s(result, sizeof(result), "def"); //result = abcdef
	printf("Result(cat): %s\n", result);
	return 0;

}