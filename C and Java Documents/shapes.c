#include <stdio.h>
/* This project will be extra practice with structs */

/*
  Create a struct called Circle. The struct should
  have one variable in it of type float called Radius.
  Make sure to typedef it.
*/

/* 
  Create a struct called Rectangle. The struct should
  have two variables in it of type float. One should be
  called Width and the other should be called Height.
  Make sure to typedef it.
*/

/*
  Function name: CircleArea
  Inputs       : Circle shape
  Outputs      : float
  
  Write a function that takes in a Circle and returns
  a float. Calculate the area of the Circle and return
  the result.
  
  Formula for area of a circle:
  Area = pi * Radius^2
  
  Remember, you can't use ^ to square something in code.
  Also use 3.14 for pi.
*/

/*
  Function name: RectangleArea
  Inputs       : Rectangle shape
  Outputs      : float
  
  Write a function that takes in a Rectangle and returns
  a float. Calculate the area of the Rectangle and return
  the result.
  
  Formula for area of a rectangle:
  Area = Width * Height
*/

int main(void)
{
  Circle myCircle;
  Rectangle myRectangle;
  float areaCircle;
  float areaRectangle;
  
  myCircle.Radius = 4;
  myRectangle.Width = 2;
  myRectangle.Height = 4;
  
  areaCircle = CircleArea(myCircle);
  areaRectangle = RectangleArea(myRectangle);
  
  printf("Area of circle with radius %g: %g", myCircle.Radius, areaCircle);
  printf("Area of rectangle with width %g and height %g: %g", myRectangle.Width, myRectangle.Height, areaRectangle);
  
  return 0;
}
