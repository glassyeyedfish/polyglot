import random

print("Welcome to the number guessing game imlemented in Python.")
print("Please guess a number that has been randomly chosen between 1 and 100.")
print("You only have 9 guesses, so make them count!")
print("Type 'quit' as your guess at any time to quit the game.")

random.seed()
random_num = random.randint(1, 100)

guess_count = 1

while guess_count < 10:
    guess_prompt = "\nGuess number {}: "
    guess_str = input(guess_prompt.format(guess_count))

    if guess_str == "quit":
        print("Bye!")
        guess_count = 11
    elif guess_str.isnumeric():
        guess_int = int(guess_str)

        if guess_int < 1 or 100 < guess_int:
            print("Please guess a number between 1 and 100")
        elif guess_int == random_num:
            print("Congradulations! You guesses the correct number!")
            guess_count = 11
        elif guess_int > random_num:
            print("Your guess is too high, try again!")
            guess_count += 1
        elif guess_int < random_num:
            print("Your guess is too low, try again!")
            guess_count += 1


    else:
        print("This is not a valid input!")


if guess_count == 10:
    print("\nWait... you ran out of guesses! That's it, you lose!")