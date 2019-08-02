/*
  Pascals triangle is a special mathematical
  tool that consists of a bunch of numbers in the
  shape of a triangle. The triangle works like this:
  All the nubers on the left and right edges are 1.
  The interior numbers are the sum of the two numbers
  above it.
  
  Here are the first couple levels of the triangle
  
  Level 1:
  1
  
  Level 2:
  1 1
  
  Level 3:
  1 2 1
  one since it's on the outside, two because it has one and one above it, one since it's on the outside
  
  Level 4:
  1 3 3 1
  1 since outside, 1 + 2, 1 + 2, 1 since outside
  
  The full triangle out to 4 levels:
     1
    1 1
   1 2 1
  1 3 3 1
*/

/*
  Write a function called Factorial that takes an int and returns an int.
  Calculate the factorial of that number and return that value.
  
  The factorial is every number from 1 to that number multiplied together.
  
  Ex
  Factorial(5)
  
  would calculate
  5 * 4 * 3 * 2 * 1

/*
  Write a function called Pascal that takes in an int and returns nothing.
  The function will print out Pascal's triangle to that many levels.
  
  Ex:
  Input 2
   1
  1 1
  
  Input 5
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
  
  To calculate the number at a specific position, use the following formula
        r!
  ------------- (This is a fraction)
  p! * (r - p)!
  
  r is the row you are currently on
  p is the position in that row
  ! is a factorial
*/

/*
  In main, write a program that gets an int from the user, the gives that
  int to the Pascal function. Keep asking for input and drawing triangles
  until the user enters 0
*/
