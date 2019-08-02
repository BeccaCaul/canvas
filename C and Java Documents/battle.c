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
  char input = 'N';
  char trash; //For the carriage return
  
  while(input != 'Y')
  {
    printf("Roll dice? (Y/N) ");
    scanf("%c%c", &input, &trash);
    input = (char)toupper(input);
  }
}

// GLOBAL VARIABLES 
struct Stats PLAYER = {10,10,10};
struct Stats COMPUTER = {10,10,10};

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

      // If damage is greater than defense
        // Do the difference in damage to computer
        // Print out the computers new health
      // Otherwise print that there was no damage

      // Set turn to the computers turn
    }
    else /* It is the computers turn */
    {
      // Roll dice for computer add to power
      // Print out the result

      // Ask the player to roll the dice

      // Roll dice for player add to defense
      // Print out the result

      // If damage is greater than defense
        // Do the difference in damage to player
        // Print out the players new health
      // Otherwise print that there was no damage

      // Set the turn to the players turn
    }

  }while(/* Continue while both players are alive */);
  
  // Print a notification of who died

  return 0;
}