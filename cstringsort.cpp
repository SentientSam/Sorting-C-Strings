/*
  cstringsort.cpp
  1/25/2019
  Samuel Lamb
  Project 1
*/

#include<cstringdiff.h>
#include<cstdlib>
#include<cstringsort.h>
#include<cctype>
#include<iostream>

void LexDiff (char* *beg, char* *end)
{
  //if (end - beg < 2) return;
  char* *i; 
  char* *j; 
  char* *k; 
  char*   t; 
  for (i = beg; i != end; ++i) 
  {
    t = *i;
    for (k = i, j = k--; j != beg && LexLT(t,*k); --j, --k) //calls LexLT
      *j = *k;
    *j = t;
  }
}

void DictionaryDiff (char* *beg, char* *end)
{
  //if (end - beg < 2) return;
  char* *i; 
  char* *j; 
  char* *k;
  char*   t; 
  for (i = beg; i != end; ++i)
  {
    t = *i;
    for (k = i, j = k--; j != beg && DictionaryLT(t,*k); --j, --k)
      *j = *k;
    *j = t;
  }
}
