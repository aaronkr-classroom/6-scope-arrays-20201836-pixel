#include <stdio.h>
#include <string.h>
//q2, q3




int main() {

	
	
	short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
	int sum = 0;
	int bigest = data[0];

	for (int i = 0; i < 9; i += 2) {
		sum += data[i];
		
	}
	for (int j = 0; j < 9; j ++) {
		if (data[j] > bigest)
			bigest = data[j];
			

	}

	printf("sum: %d\n", sum);
	printf("bigest: %d\n", bigest);

	return 0;
}