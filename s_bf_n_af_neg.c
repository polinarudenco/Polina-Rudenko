#include "s_bf_n_af_neg.h"

int s_bf_n_af_neg(int a, int arr[100]) 
{
  int ft = ind_ft_neg(a, arr);
  int lt = ind_lt_neg(a, arr);
  int s = 0;
  for (int i = 0; i < ft; i++) 
  {
    s += abs(arr[i]);
  }
  int n;
  for (int i = lt; i < n; i++) 
  {
    s += abs(arr[i]);
  }
  return s;
}