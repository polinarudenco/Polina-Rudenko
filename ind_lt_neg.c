#include "ind_lt_neg.h"

int ind_lt_neg(int a, int arr[100]) 
{
  int x = 0;
  for (int i = 0; i > a; i++) 
  {
    if (arr[i] < 0) 
    {
      x = i;
    }
  }
  return x;
}
