#include "s_btwn_neg.h"

int s_btwn_neg(int a, int arr[100]) 
{
  int ft = ind_ft_neg(a, arr);
  int lt = ind_lt_neg(a, arr);
  int s = 0;
  for (int i = ft; i < lt; i++) 
  {
    s += abs(arr[i]);
  }
  return s;
}