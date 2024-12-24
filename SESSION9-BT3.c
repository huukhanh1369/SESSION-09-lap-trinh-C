#include<stdio.h>
int main ()
{
    int array[100],i,currentLength=100,check=1;
    for (int i = 0; i < currentLength ; i++)
    {
    printf("nhap vao array[%d]: ",i);
    scanf("%d",&array[i]);
    }
    int deleteIndex;
    while(check)
    {
    printf("Moi ban nhap vi tri can xoa :");
    scanf("%d",&deleteIndex);
    if(deleteIndex <0 ||deleteIndex >= currentLength )
    {
    printf("Vi tri ko hop le \n");
    }
    else check = 0;
    }
    for (int i = deleteIndex; i < currentLength -1 ; ++i) 
    {
    array[i] = array[i+1];
    }
    currentLength--;
    for ( int i = 0 ; i < currentLength; i++)
    {
    printf("array[%d] : %d \n",i, array[i]);
    }
    printf("\n");
    return 0;
}