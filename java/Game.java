import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import java.util.Random;

public class Game {

    public static void main(String[] args) throws IOException {
        System.out.println("Welcome to the number guessing game imlemented in Python.");
        System.out.println("Please guess a number that has been randomly chosen between 1 and 100.");
        System.out.println("You only have 9 guesses, so make them count!");
        System.out.println("Type 'quit' as your guess at any time to quit the game.");

        Random random = new Random();
        int randomNum = random.nextInt(99) + 1;

        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

        int guessCount = 1;

        while (guessCount < 10) {
            System.out.print("\nGuess number " + guessCount + ": ");
            String guessStr = input.readLine();

            if (guessStr.equals("quit")) {
                System.out.println("Bye!");
                guessCount = 11;
            } else {
                try {
                    int guessInt = Integer.parseInt(guessStr);

                    if (guessInt < 1 || 100 < guessInt) {
                        System.out.println("Please guess a number between 1 and 100");
                    } else if (guessInt == randomNum) {
                        System.out.println("Congradulations! You guesses the correct number!");
                        guessCount = 11;
                    } else if (guessInt > randomNum) {
                        System.out.println("Your guess is too high, try again!");
                        guessCount += 1;
                    } else if (guessInt < randomNum) {
                        System.out.println("Your guess is too low, try again!");
                        guessCount += 1;
                    }
                } catch (NumberFormatException e) {
                    System.out.println("This is not a valid input!");
                }
            }
        }

        if (guessCount == 10) {
            System.out.println("\nWait... you ran out of guesses! That's it, you lose!");
        }
    }

}