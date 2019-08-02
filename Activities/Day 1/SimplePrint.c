/*
  Write a function called PrintOnce that takes one int as a parameter and has
	void for it's return type. The function should print out the int.
*/

/*
  Write a function called PrintMulti that takes two ints as parameters and has
	void for it's return type. The function should print the first number the
	second number of times.
	
	Ex
	it my parameters are 2 and 4, it should print
	2
	2
	2
	2
*/


/* Don't change main */
/* When you run this program, the output should look like this:
5
2
20

2
2
2
2

5
5
*/
int main(void)
{
  PrintOnce(5);
  PrintOnce(2);
  PrintOnce(20);
  printf("\n");
  PrintMulti(2, 4);
  printf("\n");
  PrintMulti(5, 2);
  
  return 0;
}
