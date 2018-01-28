#include <stdio.h>

void main ()
{
  int a[1000], n, k, i, sum=0;
  scanf ("%d\n%d", &n , &k);

  if (n>0 && k>0)
  {
    for (i=0; i<n; i++)
      scanf ("%d\n", &a[i]);

    for (i=0; i<k; i++)
      sum=sum+a[i];
    printf ("%d", sum);  
  }
  else
    printf ("invalid input");
}
