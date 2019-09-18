/*
    cstringdiff.cpp
    1/25/2019
    Samuel Lamb
    Project 1
*/

#include<cstdlib>
#include<cstringdiff.h>
#include<cctype>

int LexDiff (const char* s1, const char* s2) 
{
  size_t i=0;
  for(;s1[i]!='\0' && s2[i]!='\0';++i) 
  {
      if(s1[i] != s2[i])
      {
        return(s1[i]-s2[i]);
      }
  }
  return(s1[i] - s1[i]);

}

int DictionaryDiff (const char* s1, const char* s2)
{
  size_t i=0;
  for(;s1[i]!='\0' && s2[i]!='\0';++i)
  {
    if(tolower(s1[i])<tolower(s2[i]))
    {
      return(-1);
    }  
    else if(tolower(s1[i]>tolower(s2[i])))
    {
      return(1);
    } 
  }
  if(s1[i]!='\0'&&s2[i]=='\0')
  {
    return(1);
  }
  else if(s1[i]=='\0'&&s2[i]!='\0')
  {
    return(-1);
  }
  else
  {
  return 0;
  }
}

bool LexLT (const char* s1, const char* s2)
{
  return(LexDiff(s1,s2)<0); 
}

bool DictionaryLT (const char* s1, const char* s2)
{
  return(DictionaryDiff(s1,s2)>0);
}
