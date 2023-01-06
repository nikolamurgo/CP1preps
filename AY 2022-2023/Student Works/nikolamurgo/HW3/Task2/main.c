#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

const char *WordPhones[] = {"orange","number","huawei","xiaomi","people","before"}; // Words to guess

int main (){
    
  printf ("Welcome to FAMNIT HANGMAN GAME !!!\n");
  printf ("RULES: Type a letter and if it's correct don't type it again.\n"
      "If you type in an incorrect letter, one part of the body is drawn,\n"
      "when you make 6 mistakes the game is over and you LOST, if you\n"
      "finish the game with less mistakes (or none)you are the WINNER.\n" 
      "GOOD LUCK !\n"); // rules for the game

  time_t time_now = time (NULL); // gets the current time and stores it
  srandom ((unsigned) time_now);
  char sWord[6]; // declaring a character array with size of 6 
  int dRandom = rand()%9;
  strcpy (sWord, WordPhones[dRandom]);
  char cUserEnters=0;
  int dMistakes = 6; // number of mistakes that can happen
  char sAllEnt[dMistakes + 10];
  int dCount=0;
  int dRep=0;

  char sWlen[strlen (sWord)];
  for (int i; i < strlen (sWord); i++){ // loops trough each char of the string and assigns underscore
      sWlen[i] = '*';
    }

  while (1){
      if (dMistakes==0 || strcmp(sWlen, sWord)==0){
        printf ("The correct word is: %s", sWord);
        break;
    }
      printf ("%s", sWlen);
      printf ("\nType your guess letter here: ");
      scanf (" %c", &cUserEnters); // user enters a character and stores it in cUserEnters
      strncat (sAllEnt, &cUserEnters, 1);
      if (isalpha(cUserEnters)==0){
        printf ("\nThat is not a letter!\n");
        continue;
    }
      dRep = 0;
      for (int i=0; i<strlen(sAllEnt); i++){
      if (cUserEnters == sAllEnt[i]){
          dRep++;
          continue;
        }
    }
      dCount = 0;
      for (int j=0; j<strlen(sWord); j++){
      if (cUserEnters==sWord[j]){
          sWlen[j]=cUserEnters;
          dCount++;
        }
    }
      if (dCount==0){
          if (dRep!=1){ // when typing in the same wrong letter again 
              printf ("\nYou already got that wrong! Pay attention!");
            }
          else{
              printf ("That's a mistake!"); // when typing in a wrong letter
              dMistakes--;
            }
        }
    }
}