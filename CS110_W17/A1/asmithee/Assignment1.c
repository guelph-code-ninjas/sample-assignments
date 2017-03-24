// alan smithee assignment 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int a, int b);
int createrandom();

int main() {
    // 1000 should be fine for name
    char name[1000];
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Hello %s\n", name);

    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("You entered %d\n", num);

    for (;;) {
        int x;
        printf("Give me a number below 10:\n");
        scanf("%d", &x);

        if (x >= 10)
            continue;   // bad input
        else {
            printf("Great!\n");
            break;  // good input
        }
    };

    printf("%s, your numbers add up to %d\n", name, sum(num, num2));

    for (int i = 0; i < 3; i++) {
        int random = createrandom();

        if (random > 10) {
            printf("%d is large.\n", random);
            break;
        } else {
            printf("%d is small.\n", random);
        }
    }

    int guess;
    int answer = createrandom();
    
    for (;;) {

        printf("Guess a number from 1-100:\n");
        scanf("%d", &guess);

        if (guess == answer) {
            printf("Winner!\n");
            break;
        } else {
			printf("Wrong, try again.\n");
            continue;
        }
    }

    return 0;
}


// adds two numbers
int sum(int a, int b) {
    printf("in sum function\n");
    return a + b;
}

// random number
int createrandom() {
    srand(time(NULL));
    return = 1 + (rand() % 100);
}
