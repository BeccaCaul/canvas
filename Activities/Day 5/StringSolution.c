#include "String.h"
#include <stdio.h>
#include <string.h>

void Strrev(char * string);

/*
Function Name : strlen
Parameters    : const char *
Return 		  : int

Description:
strlen takes a const char * and computes the length of a string
excluding the null terminating character.
*/
int Strlen(const char * string)
{
	const char *s;
	for(s = string; *s; ++s){}
	return (s - string);
}

/*
Function Name : strupper
Parameters    : char *
Return 		  : void

Description:
strupper takes a char * and converts each character to its 
respective uppercase character.
*/
void strupper(char * string)
{
	int stringOffset = 0;
  
	while(*(string + stringOffset))
	{
		if(*(string + stringOffset) >= 'a' && *(string + stringOffset) <= 'z')
		{
		*(string + stringOffset) -= 32;
		}
		stringOffset++;
	}
}

/*
Function Name : strlower
Parameters    : char *
Return 		  : void

Description:
strupper takes a char * and converts each character to its 
respective lowercase character.
*/
void strlower(char * string)
{
	int stringOffset = 0;

	while (*(string + stringOffset))
	{
		if (*(string + stringOffset) >= 'A' && *(string + stringOffset) <= 'Z')
		{
			*(string + stringOffset) += 32;
		}
		stringOffset++;
	}
}

/*
Function Name : strcmp
Parameters    : const char *
const char *
Return		  : int

Description:
strcmp takes two const char * and walks both strings keeping
track of the characters in both and comparing them one by one,
if the function reaches the null terminator, and they match
up to this point, the function will return that they are equal.
*/
int strcmp(const char * string1, const char * string2)
{
	for (; *string1 == *string2; string1++, string2++)
		if (*string1 == '\0')
			return STRING_EQUAL;
	return ((*string1 < *string2) ? STRING_LESS_THAN : STRING_GREATER_THAN);
}

/*
Function Name : replacechar
Parameters    : char *
				char
				char
Return		  : void 

Description:
replacechar takes a string, and a character a to replace in the 
string, and a character b to replace with. replacechar will 
walk the string and replace all occurances of char a with char b.
*/
void replacechar(char * string, char a, char b)
{
	int stringOffset = 0;

	while (*(string + stringOffset))
	{
		if (*(string + stringOffset) == a)
			*(string + stringOffset) = b;
		stringOffset++;
	}
}

/*
Function Name : palindrome
Parameters    : const char *
Return		  : int

Description:
palindrome takes a string and checks if the string reads the same
backwards as it does forward.
*/
int palindrome(const char * string)
{
	char reversedString[100];
	strcpy(reversedString, string);
	Strrev(reversedString);
	if(strcmp(string, reversedString) == 0)
		return 1;
	return 0;
}

void Strrev(char * string)
{
	int i, j = 0;
	char temp[100];
	strcpy(temp, string);

	for (i = 0; string[i] != '\0'; i++);
	while (i != 0)
		temp[j++] = string[--i];
	temp[j] = '\0';
	*string = *temp;
}
