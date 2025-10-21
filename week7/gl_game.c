#include <stdio.h>

#include <stdlib.h> //rand(), srand()
#include <time.h> //time()


int rand_num;

void gameInit(void) {
	srand(time(0)); // //1970년 1월1일 0:00시부터 현재까지 ms값
					// 213426437523 난수
	rand_num = rand() % 10 + 1;
}

void gamePlay(void) {
	//지역 변수
	int guess = 0, count = 0, allowed = 5; //5개만 가능

	printf("Guess the num (1 - 10): \n");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("You win\n");
			break;
		}
		else if (guess < rand_num) {
			printf("Too low\n");

		}
		else if (guess > rand_num) {
			printf("Too higher\n");
		}
		

	} while (count != allowed); 

	if (count > allowed)
		printf("Too many guesses! you lose\n");


	
}


int main(void) {


	gameInit();
	gamePlay();
	
	return 0;
}


