//PROGRAM TO INPUT N (TAKEN AS INPUT FROM USER) NUMBER OF ELEMENTS INTO AN ARRAY
#include<stdio.h>
int main(){
    int i,n, c, d, swap;
    printf("ENTER NUNMBER OF ELEMENTS IN ARRAY\n");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {printf("ENTER THE %d ELEMENT OF THE ARRAY\n",i);
    scanf("%d",&array[i]);}
    printf("Input over\n");
//CREATED PROGRAM TO BUBBLE SORT INTO AN ARRAY ( DESCENDING ORDER)
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] < array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
// FINAL PROGRAM TO PRINT THE LIST OF ELEMENTS
  printf("Bubble Sorted array elements in descending order:\n");
  for (c = 0; c < n; c++)
     printf("%d ", array[c]);

  return 0;}