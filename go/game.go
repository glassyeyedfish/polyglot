package main

import (
	"bufio"
	"fmt"
	"log"
	"math/rand"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Println("Welcome to the number guessing game imlemented in C.")
	fmt.Println("Please guess a number that has been randomly chosen between 1 and 100.")
	fmt.Println("You only have 9 guesses, so make them count!")
	fmt.Println("Type 'quit' as your guess at any time to quit the game.")

	randomNum := rand.Intn(100) + 1

	guessCount := 1
	for guessCount < 10 {
		// Prompt user for a guess.
		fmt.Printf("\nGuess number %d: ", guessCount)

		// Get user input
		guessStr, err := reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}
		guessStr = strings.Trim(guessStr, "\n")

		// Handle user input
		if guessStr == "quit" {
			fmt.Println("Bye!")
			break
		}

		guessInt, err := strconv.Atoi(guessStr)
		if err != nil {
			fmt.Println("This is not a valid input!")
			continue
		}

		if guessInt == randomNum {
			fmt.Println("Congradulations! You guessed the correct number!")
			break

		} else if guessInt < 1 || guessInt > 100 {
			fmt.Println("Please guess a number between 1 and 100.")
			continue

		} else if guessInt > randomNum {
			fmt.Println("Your guess is too high, try again!")
			guessCount++
			continue

		} else if guessInt < randomNum {
			fmt.Println("You guess is too low, try again!")
			guessCount++
			continue

		}
	}

	// Only if you ran out of guesses will the count be 10
	if guessCount == 10 {
		fmt.Println("\n Wait... you ran out of guesses! That's it, you lose!")
	}
}
