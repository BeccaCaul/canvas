/* Fibonacci numbers
  Write a program that prints a table of fibonacci numbers
  and their corresponding fibonacci quotients.
  
  Fibonacci sequence:
  F(0) = 0
  F(1) = 1
  F(N) = F(N-1) + F(N-2)
  
  ie: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
  
  Fibonacci quotient:
  Q(N) = F(N) / F(N-1)
  for N > 1
  
  Prompt for an integer between 2 and 46, then print out a
  table with the fibonacci sequence and fibonacci quotients
  from 0 to that number. Be sure to check for invalid input,
  numbers less than 2 or greater than 46, and re prompt
  for input.
  
  Match the headers and format your output like this:
  
  Enter the Fibonacci number to calculate.
  The number must be an integer between 2 and 46. (Enter 1 to quit): 12

             Fibonacci        Fibonacci
   N           number          quotient
  -------------------------------------
   0             0                  N/A
   1             1                  N/A
   2             1   1.0000000000000000
   3             2   2.0000000000000000
   4             3   1.5000000000000000
   5             5   1.6666666666666667
   6             8   1.6000000000000001
   7            13   1.6250000000000000
   8            21   1.6153846153846154
   9            34   1.6190476190476191
  10            55   1.6176470588235294
  11            89   1.6181818181818182
  12           144   1.6179775280898876
*/
#include <stdio.h>

int main(void)
{ 
  /* 1. Declare necessary variables              */
  /* 2. Display prompt and get user input        */
  /* 3. Print column headings                    */
  /* 4. Print first two values                   */
  /* 5. Use a loop to calculate remaining values */
}
