#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char userSelection;
int counter = 0;
char opps;
int randNum;
char result;
int userPoints = 0;
int oppsPoints = 0;


int funGames(char userSelection, char opps){

if(userSelection == opps){
  printf("\nTie Game! You both selected %c", userSelection);
  return -1;
  }//end if statment
  
if(userSelection == 'R'&& opps == 'S'){
  printf("\nOpponent chose Rock. You chose Paper. \n");
  return 1;
  }//end if statement
  
if(userSelection == 'S'&& opps == 'R'){
  printf("\nOpponent chose Rock. You chose Scissors. \n");
  return 0; 
  }//end if statement

if(userSelection == 'S' && opps == 'P'){
  printf("\nOpponent chose Paper. You chose Scissors. \n");
  return 1;
}//end if statement
if (userSelection == 'P' && opps == 'S'){
  printf("\nOpponent chose Scissors. You chose Paper. \n");
  return 0;
  }//end if statement


if (userSelection == 'P' && opps == 'R'){
  printf("\nOpponent chose Rock. You chose Paper. \n");
  return 1;
  }//end if statement

if(userSelection == 'R' && opps == 'P'){
  printf("\nOpponent chose Paper. You chose Rock. \n");
  return 0;
  }//end if statement
  
if(userSelection == 'Q')
  printf("\n\nYou just quit the program\n");
  return 2;
}//end fun games method
int main(void) {
 //program output to user
printf("Welcome to Rock, Paper, Scissors game. Winner of two games will be the winner of the round!\n\n");
while((userSelection != 'Q') && (userPoints <= 2) && (oppsPoints <= 2)){

printf("Enter 'R' for Rock, 'P' for paper, 'S' for scissors, or 'Q' to quit this game:");
  
opps = rand() % 3 + 1;
scanf(" %c", &userSelection);//user input

  if (opps == 1)
    
    opps = 'R';

  if (opps == 2)
    
    opps = 'P';

  if (opps == 3)
    
    opps = 'S';
  
result = funGames(userSelection, opps);

if(result == 1){
  printf("\nCongrats you win!!\n\n");
  userPoints++;
}//end if statement

if(result ==0){
  printf("\nSorry you lose!\n\n");
  oppsPoints++;
}//end if statement

  if(result==-1){
printf("\nTie game!\n\n");
}//end if statement

printf("Score Keeper:\n");
printf("You: %d", userPoints);
printf("\nOpponent: %d\n\n", oppsPoints);
  
  }//end while loop
  return 0;
}

