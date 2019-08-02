/*
  Write a function called Double that takes in an int as a parameter and returns
	an int. The function will multiply the parameter by 2 and return the answer.
  
  Ex:
  Input: 4
  return 8
*/


/*
  Do not change main.
  This program should print out:
  8
  10
  40
*/
int main(void)
{
  int num = 4;
  int num2;
  num2 = Double(num);
  printf("%i\n", num2);
  printf("%i\n", Double(5));
  printf("%i\n", Double(Double(10)));
  return 0;
}
