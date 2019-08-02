/*
  Write a function called MutlTable that takes in
  nothing and returns nothing. The function will
  print out the multiplication table number
  from 1 to 12. You will need to use a loop inside
  of another loop
  
  Ex:
    1   2   3   4   5   6   7   8   9  10  11  12
    2   4   6   8  10  12  14  16  18  20  22  24
	(the rest of the table here)
*/

int main(void)
{
  printf("Printing multiplication table\n");
  MultTable();
  
  return 0;
}

/* Challenge:
  Write another function called PartMultTable that takes
  in an integer and returns nothing. The function will print
  out the multiplication table for that number up to 12.
  
  Ex
  Input: 5
  5 10 15 20 25 30 35 40 45 50 55 60
  
  Change the program to get an integer from the user.
  If the integer is 0, print out the full multiplication
  table. If it's greater than zero, print out the
  multiplication table for that number up through 12.
*/
  