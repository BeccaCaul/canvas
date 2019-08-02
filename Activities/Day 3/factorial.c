#include <stdio.h>

int factorial(int number)
{
  int answer = 1;
  
  for(; number > 0; --number)
  {
    answer = answer * number;
  }
  
  return answer;
}

int main(void)
{
  int input;
  int answer;
  
  printf("Enter a number: ");
  scanf("%i", &input);
  
  answer = factorial(input);
  printf("%i! = %i", input, answer);
  
  return 0;
}
