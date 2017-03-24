// Richard Roe
// CS110 A1

#include <stdio.h>
#include <time.h>

void fun() {
    printf("I am a function named fun!\n");
}

void main() {
    int n = 99;
    char s[100];
	int i;


    printf("Enter a string:\n");
    scanf("%s", &s);
    printf("You typed %s\n", s);


    printf("Enter an integer:\n");
    scanf("%d", &i);
    printf("You typed %d\n", i);

    do {

        printf("Enter a number under 10:\n");
        scanf("%d", &n);

    } while (n > 10);


    printf("Great!\n");


    int sum = n + i;
    printf("Your numbers add up to %d\n", sum);

    int r;
    srand(time(NULL));
    r = 1 + (rand() % 100);

	i = 0;
	do {
		// seed generator
		srand(time(NULL));
		// generate random number
		r = 1 + (rand() % 100);

		if (r > 10) {
			printf("Random number is above 10.\n");
			break;
		} else {
			printf("Random number is below 10.\n");
		}
	} while (i < 3);

	fun();

    int answer, guess;
    srand(time(NULL));
    answer = 1 + (rand() % 100);

    while (1) {
        printf("Guess the random number 1-100:\n");
        scanf("%d", &guess);

        if (guess == answer) {
            printf("Winner!\n");
            break;
        } else {
			printf("Nope! Try again!\n");
            continue;
        }
    }

}
