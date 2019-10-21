#include <stdio.h>
#include <stdlib.h>
#include "ind_ft_neg.h"
#include "ind_lt_neg.h"
#include "s_btwn_neg.h"
#include "s_bf_n_af_neg.h"

int main() 
{
  int arr[100];
  int a = 0;
  int ind;
  char spc = " ";
  scanf("%d%c", &ind, &spc);
  for (int i = 0; spc != '\n'; i++) 
  {
    scanf("%d%c", &arr[i], &spc);
    a++;
  }
  switch (ind) 
  {
  case 0:
    return_f = ind_ft_neg(a, arr);
	if (retutn_f >= 0)
{
	printf("%d\n", ind_ft_neg(a, arr));
}
	else
{
	printf("Введенные данные не позволяют выполнить программу");
}
    break;
  case 1:
    return_f = ind_ft_neg(a, arr);
	if (retutn_f >= 0)
{
	printf("%d\n", ind_lt_neg(a, arr));
}
	else
{
	printf("Введенные данные не позволяют выполнить программу");
}
    break;
  case 2:
    return_f = s_btwn_neg(a, arr);
	if (return_f >= 0)
{
	printf("%d\n", return_f);
}
	else
{
	printf("Введенные данные не позволяют выполнить программу");
}
    break;
  case 3:
    return_f = s_bf_n_af_neg(a, arr);
	if (return_f >= 0)
{
	printf("%d\n", return_f);
}
	else
{
	printf("Введенные данные не позволяют выполнить программу");
}
    break;

    default:
    printf("Данные некорректны\n");
    break;
  }
  return 0;
}