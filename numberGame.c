#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char name[50];
	int turns = 1;
	int guess = 0;
	int number = 0;

	srand(time(NULL));
	number = (rand() % 100) + 1;

	printf("Hi, What is your name? ");
	scanf("%s", name);
	printf("Nice to meet you %s. Let's play a game \n", name);
	
	while (guess != number) {
	printf("turn %d) Please guess a number: ", turns);
	scanf("%d", &guess);
	
	++turns;
	
		if (guess < number) {
			printf("too low\n");
		} else if (guess > number) {
			printf("too high\n");
		}
	}

	if (turns < 7) {
		printf("Good Job!\n");
	} else if ( turns == 7) {
		printf("As expected\n");
	} else {
		printf("Try again?\n");
	}

	return 0;
}
