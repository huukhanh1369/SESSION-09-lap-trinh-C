#include<stdio.h>
int main ()
{
    int array[100],i,currentLength=100;
    for (int i = 0; i < 100 ; i++)
    {
    printf("nhap vao array[%d]: ",i);
    scanf("%d",&array[i]);
    }
    int addIndex, newValue;
    printf("Moi ban nhap gia tri muon them: ");
    scanf("%d",&newValue);
    printf("Moi ban nhap vi tri can them: ");
    scanf("%d",&addIndex);
    if(addIndex <0)
    {
        addIndex = 0;
    }
    else if(addIndex > currentLength)
    {
        addIndex = currentLength;
    }
    for(int i = currentLength; i> addIndex; i--)
    {
        array[i] = array[i-1];
    }
    array[addIndex] = newValue ;
    currentLength++;
    for (int i = 0; i < currentLength; ++i)
    {
    printf("array[%d]: %d\n",i,array[i]);
    }
}
