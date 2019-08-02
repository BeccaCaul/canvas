/*
  Objective:

  Write a program that simulates a battle by following
  the steps written in the comments!

  Ask questions if you need help!
  ----------------------------------------------------------------


  ----------------------------------------------------------------

  Challenge 1:

  Ask the user if they want to play again instead of ending 
  the program.

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>    
#include <time.h>   // For randomness

#define PLAYER_TURN 1
#define COMPUTER_TURN 0

struct Stats
{
  int health;
  int defense;
  int power;
};

int RollDice(void)
{
  return rand() % 6 + 1;
}

void AskToRollDice(void)
{
  unsigned char roll = 'N';
  unsigned char trash; //For the carriage return

  while(roll != 'Y')
  {
    printf("Roll dice? (Y/N) ");
    scanf("%c%c", &roll, &trash);
    roll = (unsigned char)toupper(roll);
  }

  printf("\n");
}

// GLOBAL VARIABLES 
struct Stats PLAYER;
struct Stats COMPUTER;

// Practice initializing the values in a struct
void InitStats(void)
{
  // Set all the parts of the PLAYER and COMPUTER
  // Stats structs to their starting values
  // You may customize the values or even ask the
  // player to chose by prompting for input
}

int main(void)
{
  int turn = 0;

  // First initialize PLAYER & COMPUTER STATS
  InitStats();

  // Loop until one player is dead (check their health)
  do
  {
    if(/* It is the players turn */)
    {
      // Ask the player to roll the dice 

      // Roll dice for player add to power
      // Print out the result

      // Roll dice for computer add to defense
      // Print out the result

      // If damage is greater do the difference in damage to computer
        // Print out the computers new health

      // Set turn to the computers turn
    }
    else /* It is the computers turn */
    {
      // Roll dice for computer add to power
      // Print out the result

      // Ask the player to roll the dice

      // Roll dice for player add to defense
      // Print out the result

      // If damage is greater do the difference in damage to player
        // Print out the players new health

      // Set the turn to the players turn
    }

  }while(/* Either player is dead */);

  return 0;
}