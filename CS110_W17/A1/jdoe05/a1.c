// John Doe
// CS110 A1

#include <stdio.h>
#include <time.h>

void function() {
    printf("i am a function");
}

int main(void) {
    int num;
    int num2;
    char str[50];

    // String entry
    printf("Enter a string:\n");
    scanf("%s", &str);
    printf("You entered %s\n", str);

    // Integer entry
    printf("Enter an integer:\n");
    scanf("%d", &num);
    printf("You entered %d\n", num);

    while (1) {
        printf("Enter a number less than 10:\n");
        scanf("%d", &num2);
        
        if (num2 < 10)
            break;
        else
            continue;
    }

    printf("Great!\n");

    int sum;
    sum = num + num2;
    printf("Your numbers add up to %d\n", sum);

    for (int i = 0; i < 3; i++) {
        int ran;
        srand(time(NULL));
        ran = 1 + (rand() % 100);
        
        if (ran < 10)
            printf("your random number is below 10. it is %d\n", ran);
        else
            printf("your random number is at least 10. it is %d\n", ran);
    }

    function();

    int ans, guess;
    srand(time(NULL));
    ans = 1 + (rand() % 100);

    printf("Guessing game!");

    while (1) {
        printf("Guess the random number:\n");
        scanf("%d", &guess);
        if (guess == ans) {
            printf("you win!\n");
            break;
        } else {
            continue;
        }
    }

    return 0;
}
