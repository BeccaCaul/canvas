/******************************************************************************
filename    pi.c
author      Christopher Hudson
DP email    c.hudson@digipen.edu
course      CS120
assignment  2
due date    10/07/2014

Brief Description:
  This program contains functions to calculate and returns pi using 2 different 
  methods with a supplied accuracy
  
******************************************************************************/
#include <math.h> /* sqrt */

#define STARTING_DENOMINATOR 1 /* starting denominator for the leibniz method */
#define DENOMINATOR_ACCUM 2    /* amount to increase denominator by */
#define SIGN_FLIP -1           /* used to flip sign of addition */
#define STARTING_SIGN 1        /* sign starts positive */
#define MULTIPLY_FOR_PI 4      /* amount to multiply by to get pie */
#define CIRCLE_RADIUS 2.0      /* radius of circle to use */

/*******************************************************************************
   Function: circle_pi

Description: Given a number of rectangles, calculates pi by summing the area of
             the rectangles distributed across a quarter circle. Returns
             estimated value of pi.

     Inputs: rectangles - The number of rectangles to use in the calculation.

    Outputs: The calculated value of pi (double).
*******************************************************************************/
double circle_pi(int rectangles)
{
  int i;              /* Counter */
  double accumulator; /* Accumulated value of pi */
  double height;      /* Height of current rectangle */
  double width;       /* Width of rectangles */
  double position;    /* Position of current rectangle */
  
  /* Initialization */
  accumulator = 0;
  width = CIRCLE_RADIUS / rectangles;
  
  for(i = 1; i <= rectangles; i++)
  {
    /* Calculate position of rectangle */
    position = (i * width) - (width / 2);
    /* Caclulate the height of the rectangle */
    height = sqrt(CIRCLE_RADIUS * CIRCLE_RADIUS - position * position);
    /* Add the area of the rectangle to the total */
    accumulator += width * height;
  }
  
  /* Return calculated value of pi */
  return accumulator;
}

/*******************************************************************************
   Function: leibniz_pi

Description: Given a number of iterations, uses the leibniz formula for
             calculating pi to the given iterations.  Returns calculated value
             of pi.

     Inputs: iterations - The number of iterations to use in the calculation.

    Outputs: The calculated value of pi (double). 
*******************************************************************************/
double leibniz_pi(int iterations)
{
  int denominator;    /* Current value of the denominator */
  int sign;           /* Current sign of the addition */
  int i;              /* Counter */
  double accumulator; /* Accumulated value of pi */
  
  /* Initialization */
  denominator = STARTING_DENOMINATOR;
  accumulator = 0;
  i = 0;
  sign = STARTING_SIGN;
  
  while(i < iterations)
  {
    accumulator += 1.0 / denominator * sign; /* Add or subtract next value */
    denominator += DENOMINATOR_ACCUM; /* Increase denominator for next loop */
    sign *= SIGN_FLIP; /* Flip the sign of the fraction */
    i++;
  }
  
  /* Return calculated value of pi */
  return accumulator * MULTIPLY_FOR_PI;
}
