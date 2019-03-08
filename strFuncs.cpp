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
  int strlength = s1.length();
  string temp = s1;
  for (int i = 0; i < strlength; i++)
  {
    int countS1 = 0; //to count occurrances of s1
    int countS2 = 0; //to count occurrances of s2
    char c = s1[i]; //iterates through s1, char by char

    for (int j = 0, k = 0; j < strlength; j++, k++)
    {
      if(c == temp[j])
      {
        countS1++;
      }
      if(c == s2[k])
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


