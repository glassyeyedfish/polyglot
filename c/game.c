#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int
main(void) {
    int i, random_num, guess_count, guess_int;
    char c, guess_str[1024];

    puts("Welcome to the number guessing game imlemented in C.");
    puts("Please guess a number that has been randomly chosen between 1 and 100.");
    puts("You only have 9 guesses, so make them count!");
    puts("Type 'quit' as your guess at any time to quit the game.");

    srand(time(0));
    random_num = (rand() % 100) + 1;

    guess_count = 1;
    while (guess_count < 10) {
        // Prompt user for a guess.
        printf("\nGuess number %d: ", guess_count);

        // Get user input.
        i = 0;
        while ((c = getchar()) != '\n') {
            guess_str[i] = c;
            i++;
        }
        guess_str[i] = '\0';

        // Convert into int
        guess_int = atoi(guess_str);

        // Handle user input.
        if (strcmp(guess_str, "quit") == 0) {
            puts("Bye!");
            guess_count = 11;
        } else if (guess_int == 0) {
            if (strcmp(guess_str, "0") == 0) {
                puts("Please guess a number between 1 and 100.");
            } else {
                puts("This is not a valid input!");
            }
        } else {
            if (guess_int == random_num) {
                puts("Congradulations! You guessed the correct number!");
                guess_count = 11;
            } else if (guess_int < 0 || 100 < guess_int) {
                puts("Please guess a number between 1 and 100.");
            } else if (guess_int > random_num) {
                puts("Your guess is too high, try again!");
                guess_count++;
            } else if (guess_int < random_num) {
                puts("Your guess is too low, try again!");
                guess_count++;
            }
        }

    }

    if (guess_count == 10) {
        puts("\nWait... you ran out of guesses! That's it, you lose!");
    }

    return 0;
}
