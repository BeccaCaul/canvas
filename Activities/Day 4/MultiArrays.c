#include <stdio.h>

int main(void)
{
  int array[4][3];
  int array2[4][3];
  int array3[4][3];
  int i, j;
  
  for(i = 0; i < 4; ++i)
  {
    for(j = 0; j < 3; ++j)
    {
      array[i][j] = i + j;
      array2[i][j] = i * j;
    }
  }
  
  /*
    Write code to print out array in the format:
    [0, 1, 2]
    [1, 2, 3]
    [2, 3, 4]
    [3, 4, 5]
  */
  
  printf("\n");
  
  /*
    Write out code to print out array but swap
    the rows and columns
    [0, 1, 2, 3]
    [1, 2, 3, 4]
    [2, 3, 4, 5]
  */
  
  printf("\n");
  
  /*
    Write out code to adds each index in array and array1,
    and stores the result into that index in array3. Then
    print array3 in the format:
    [0, 1, 2]
    [1, 2, 3]
    [2, 3, 4]
    [3, 4, 5]
    
    Example
    array:
    [0, 1, 2]
    [1, 2, 3]
    [2, 3, 4]
    [3, 4, 5]
    
    array2:
    [0, 1, 2]
    [1, 2, 3]
    [2, 3, 4]
    [3, 4, 5]
    
    array3:
    [0, 0, 0]
    [0, 1, 2]
    [0, 2, 4]
    [0, 3, 6]
  */
  
  return 0;
}
