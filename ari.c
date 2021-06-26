 
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

string ari(string s)
{
  int ch = 0, sen = 0, w = 0;
  float val; 
  int readability_index;

  for(int i = 0; s[i] != '\n'; i++)
  {
    if(isalnum(s[i]))
      ch++;
    else if(s[i] == ' ')
      w++;
    else if(s[i] ==  '.' || s[i] == '?' || s[i] == '!')
      sen++;
  }


    val = (4.71 * ((float)ch / w)) + (0.5 * ((float)w / sen)) - 21.43;

    readability_index = ceil(val);
   

    if(readability_index == 1)
      return "Kindergarten";
    if(readability_index == 2)
      return "First/Second Grade";
    if(readability_index == 3)
      return "Third Grade";
    if(readability_index == 4)
      return "Fourth Grade";
    if(readability_index == 5)
      return "Fifth Grade";
    if(readability_index == 6)
      return "Sixth Grade";
    if(readability_index == 7)
      return "Seventh Grade";
    if(readability_index == 8)
      return "Eighth Grade";
    if(readability_index == 9)
      return "Ninth Grade";
    if(readability_index == 10)
      return "Tenth Grade";
    if(readability_index == 11)
      return "Eleventh Grade";
    if(readability_index == 12)
      return "Twelfth grade";
    if(readability_index == 13)
      return "College student";
    if(readability_index == 14)
      return "Professor";

    return "exit";
}
