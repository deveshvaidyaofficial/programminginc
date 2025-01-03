#include<stdio.h>
int main(){
    //PROGRAM TO INPUT N (TAKEN AS INPUT FROM USER) NUMBER OF ELEMENTS INTO AN MULTI DIMESIONAL ARRAY
    int i,r,c,j;
    printf("ENTER NUNMBER OF ROWS IN ARRAY\n");
    scanf("%d",&r);
    printf("ENTER NUNMBER OF COLS IN ARRAY\n");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++)
{for(j=0;j<c;j++)
    {printf("ENTER THE %d ELEMENT OF THE %d ROW\n",j,i);
    scanf("%d",&arr[r][c]);}
}
    printf("Input over");
    return 0;
}
