# Polyglot

Implementing a basic guessing game in as many programming languages as possible.
Each folder contains an implementation is the specified language, and a 
README.md explaining how to run the code.

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

If the player inputs nothing, they get a unique message.
```
Guess number 8:
Uh... you still there?
```
The game loops until they player either guesses the correct answer, or they failed on thier 99th guess.
```
Guess number 99: 100
Your guess is too low, try again!

Wait... you ran out of guesses! That's it, you lose!
```
