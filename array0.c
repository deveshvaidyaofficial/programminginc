//PROGRAM TO INPUT N (TAKEN AS INPUT FROM USER) NUMBER OF ELEMENTS INTO AN ARRAY
#include<stdio.h>
int main(){
    int i,n;
    printf("ENTER NUNMBER OF ELEMENTS IN ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {printf("ENTER THE %d ELEMENT OF THE ARRAY\n",i);
    scanf("%d",&arr[i]);}
    printf("Input over");
    return 0;
}