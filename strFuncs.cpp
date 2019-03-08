#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2)
{
  char arrAlphabet[26][2] = {{'A','a'}, {'B','b'}, {'C','c'}, {'D','d'},
                    {'E','e'}, {'F','f'}, {'G','g'}, {'H','h'},
                    {'I','i'}, {'J','j'}, {'K','k'}, {'L','l'},
                    {'M','m'}, {'N','n'}, {'O','o'}, {'P','p'},
                    {'Q','q'}, {'R','r'}, {'S','s'}, {'T','t'},
                    {'U','u'}, {'V','v'}, {'W','w'}, {'X','x'},
                    {'Y','y'}, {'Z','z'}};

  int strlength = s1.length();
  string tempStr1 = s1;

  for (int i = 0; i < strlength ; i++)
  {
    int countS1 = 0; //to count occurrances of s1
    int countS2 = 0; //to count occurrances of s2
    char c = s1[i]; //iterates through s1, char by char

    /* The following for loop transforms an upper case
       letter into a lower case letter
    */
    char tempChar = c;
    char tempUpper;

    for (int row = 0; row < 26; row++) //scan through the alphabet array
    {
      if (tempChar == arrAlphabet[row][0] ||
		      tempChar == arrAlphabet[row][1])
      {
        tempChar = arrAlphabet[row][1];
        tempUpper = arrAlphabet[row][0];
      }
    } // tempChar is now lowercase
    //tempUpper is uppercase

    //we will iterate through the string to find the 
    //occurrances of either lowercase or upper case char [i] from
    //string 1
    
    char tempLower = tempChar;
    for (int k = 0; k < strlength; k++)
    {
      if (tempStr1[k] == tempUpper || tempStr1[k]== tempLower)
      {
        countS1++;
      }
    }


    for (int j = 0; j < strlength; j++) //
    {
      char d = s2[j];
      if (d == tempLower || d == tempUpper)
      {
        countS2++;
      }
    }
    if (countS1 == countS2)
    {
      continue;
    }
    else
    {
      return false;
    }
  }
  return true;
}



/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){

  return true;
}


