
  //PROGRAM TO INPUT N (TAKEN AS INPUT FROM USER) NUMBER OF ELEMENTS INTO AN ARRAY
#include<stdio.h>
int main(){
    int i,n,j,temp;
    printf("ENTER NUNMBER OF ELEMENTS IN ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {printf("ENTER THE %d ELEMENT OF THE ARRAY\n",i);
    scanf("%d",&arr[i]);}
    printf("Input over");

//INSERTION SORT PROGRAM..

for(i=1;i<n;i++)
{
    j=i;
    while(j>0 && arr[j-1]<arr[j])
    {
        temp =arr[j];
        arr[j] = arr[j-1];
        arr[j-1]=temp;
        j=j-1;
    }
}
// FINAL PROGRAM TO PRINT THE LIST OF ELEMENTS IN DESCENDING ORDER
  printf(" Sorted array elements in descending order \n");
  for (int c = 0; c < n; c++)
     printf("%d ", arr[c]);
return 0;}