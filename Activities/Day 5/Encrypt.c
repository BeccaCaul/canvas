#include <stdio.h>

/*
  This program will create functions to encrypt and
  decrypt strings.
*/

/*
  This function will take the given string
  and add val to every char.
  
  Ex
  string: "Hello World!"
  val: 3
  
  H e l l o   W o r l d !
+ 3 3 3 3 3 3 3 3 3 3 3 3
  K h o o r # Z r u o g $
  
  Hello World! -> Khoor#Zruog$
*/
void CaesarEncrypt(char* string, int val)
{
}

/*
  This function will take the given string
  and subtract val to every char.
  
  Ex
  string: "Khoor#Zruog$"
  val: 3
  
  K h o o r # Z r u o g $
- 3 3 3 3 3 3 3 3 3 3 3 3
  H e l l o   W o r l d !
  
  Khoor#Zruog$ -> Hello World!
*/
void CaesarDecrypt(char* string, int val)
{
}

/*
  This function will take the given string and
  add the other string to it letter by letter.
  If the second string is not long enough,
  repeat it.
  
  Ex
  string: "Hello World!"
  pass: "abc"
  
  H e l l o   W o r l d !
+ a b c a b c a b c a b c
  I g o m q # X q u m f $
  
  Hello World! -> Igomq#Xqumf$
*/
void VigenereEncrypt(char* string, char* pass)
{
}

/*
  This function will take the given string and
  subtract the other string from it letter by
  letter. If the second string is not long enough,
  repeat it.
  
  Ex
  string: "Igomq#Xqumf$"
  pass: "abc"
  
  I g o m q # X q u m f $
- a b c a b c a b c a b c
  H e l l o   W o r l d !
  
  Igomq#Xqumf$ -> Hello World!
*/
void VigenereDecrypt(char* string, char* pass)
{
}

int main(void)
{
  /* Read in a string to encrypt or decrypt */
  
  /* Read in an int */
  
  /* if the int is 1, read in another int for 
     the value and pass the string and the value
	 to CaeserEncrypt */

  /* if the int is 2, read in another int for 
     the value and pass the string and the value
	 to CaesarDecrypt */

  /* if the int is 3, read in another string for 
     the password and pass the string and the password
	 to VigenereEncrypt */
	 
  /* if the int is 4, read in another string for 
     the password and pass the string and the password
	 to VigenereDecrypt */
	 
  /* ask the user if they want to encrypt or decrypt
     another string. if they do, repeat the program */
}
