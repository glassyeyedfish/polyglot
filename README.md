# Polyglot

Implementing a basic guessing game in as many programming languages as possible.
This project requires an understanding of the following concepts in the chosen 
language:

## Game Specification

This game is run in a command line environment, so input is taken from `stdin` 
and output is printed to `stdout`. The game begins by greeting the player as
follows:

```
Welcome to the number guessing game implemented in ???.
Please guess a number that has been randonmly chosen between 1 and 100.

Guess number 1:
```
The program keeps track of how many guesses you've taken, and always increments this 
counter even if the guess is invalid.

If you choose the correct number, you get the following message, and the program exits.
```
Guess number 2: 50
Congradulations! You guessed the correct number!
```

If you choose a number that is too high, you get the following message.
```
Guess number 3: 75
Your guess is too high, try again!
```

If you choose a number that is too low, you get the following message.
```
Guess number 4: 25
Your guess is too low, try again!
```

If you choose a number that is not between 1 and 100, you get the following message.
```
Guess number 5: -10
Please guess a number between 1 and 100.

Guess number 6: 110
Please guess a number between 1 and 100.
```

All other invalid inputs are met with the following message.
```
Guess number 7: seven
This is not a valid input!
```