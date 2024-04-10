#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   const int MIN = 1;
   const int MAX = 100;
   int guess = 0;
   int guesses = 0;
   int answer = 0;
   srand(time(0));
   answer = (rand() % MAX) + MIN;

   do{
      printf("Enter a Guess: ");
      scanf("%d", &guess);
      if(guess > answer)
      {
         printf("Guess is Too high!\n");
      }
      else if(guess < answer)
      {
         printf("Guess is Too low!\n");
      }
      else{
         printf("CORRECT YOU WON!\n");
      }
      guesses++;
   }while(guess != answer);

   printf("**********************\n");
   printf("Correct Answer is: %d\n", answer);
   printf("Number Of Guess You have Taken is: %d\n", guesses);
   printf("**********************");
 
   return 0;
}

