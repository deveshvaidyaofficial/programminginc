#include<stdio.h>
int main(){
    //PROGRAM TO INPUT N (TAKEN AS INPUT FROM USER) NUMBER OF ELEMENTS INTO AN MULTI DIMESIONAL ARRAY
    int i,r,c,j,v;
    int sum=0;
    printf("ENTER NUNMBER OF ROWS IN ARRAY\n");
    scanf("%d",&r);
    printf("ENTER NUNMBER OF COLS IN ARRAY\n");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++)
{for(j=0;j<c;j++)
    {printf("ENTER THE %d ELEMENT OF THE %d ROW\n",j,i);
    scanf("%d",&arr[i][j]);}
}
    printf("Input over\n");
  
int r2,c2;
printf("ENTER NUNMBER OF ROWS IN ARRAY 2\n");
    scanf("%d",&r2);
    printf("ENTER NUNMBER OF COLS IN ARRAY\n");
    scanf("%d",&c2);
    int arr2[r2][c2];
    int sum2=0;
    for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
    {printf("ENTER THE %d ELEMENT OF THE %d ROW\n",j,i);
    scanf("%d",&arr2[i][j]);}
}
    printf("Input over for the matrix 2\n");


   
    return 0;
}
