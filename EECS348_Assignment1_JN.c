#include <stdio.h>

int main(){
    int secret=7;//Secret number to guess
    int guess;//User input for guess
    int tries = 3;//Number of tries allowed

    printf("Guess a number between 1 and 10.\n");//Prints prompt for user to guess

    for (int i =0; i < tries; i++){//For loop to allow user to guess until tries run out
        int remaining = tries - i;//Calculates remaining tries

        printf("Enter your guess:");//Prints prompt for user to enter guess
       
        if (scanf("%d", &guess) != 1) {//Check if input is valid
            printf("Invalid input. Please enter a number between 1 and 10.\n");//Prints message for invalid input
            i--;//Decrement i to allow user to guess again without losing a try
            while (getchar() != '\n');//Clear input buffer
            continue;//Continue to next iteration of loop
        }

        if (guess == secret){//If user guess is correct
            printf("You got it right!\n");//Prints message for correct guess
            return 0;//Returns 0 to end program
        }

        if (guess < secret){//If user guess is too low
            printf("Too low! ");//Prints message for too low guess
        } else {//Else if user guess is too high
            printf("Too high! ");//Prints message for too high guess
        }

        printf("Tries left: %d/3\n", remaining - 1);//Prints number of tries left
    }

    printf("Game over! The secret number was %d.\n", secret);//Prints message for game over and reveals secret number
    return 0;//Returns 0 to indicate successful completion of program
}
