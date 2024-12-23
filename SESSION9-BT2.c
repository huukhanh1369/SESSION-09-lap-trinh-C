#include<stdio.h>
int main ()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10},i,currentLength=10;
    for (int i = 0; i < currentLength; ++i)
    {
    printf("array[%d]: %d\n",i,array[i]);
    }
    int editIndex, updateValue;
    printf("Moi ban nhap vi tri can sua: ");
    scanf("%d",&editIndex);
    if(editIndex <0 ||editIndex >= currentLength ){
    printf("Vi tri ko hop le \n");
    }
    else
    {
    printf("Moi ban nhap gia tri moi (gia tri cu la %d): ", array[editIndex]);
    scanf("%d",&updateValue);
    array[editIndex] = updateValue;
    printf("Cap nhat thanh cong\n");
    for (int i = 0; i < currentLength; ++i)
    {
    printf("array[%d]: %d\n",i,array[i]);
    }
    return 0;
    }
}