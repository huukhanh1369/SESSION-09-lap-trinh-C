#include <stdio.h>
int main() 
{
    int maxSize = 100;
    int currentLength = 0; 
    int array[maxSize];
    while(1){
        printf("============MENU================\n");
        printf("1. Nhap phan tu cho mang.\n");
        printf("2. Hien thi mang.\n");
        printf("3. Them moi gia tri vao mang.\n");
        printf("4. Cap nhat gia tri phan tu.\n");
        printf("5. Xoa phan tu.\n");
        printf("6. thoat.\n");
        printf("================================\n");
        int choice;
        printf("Moi ban nhap chuc nang : ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                int n;
                printf("Moi ban nhap so luong phan tu cho mang : ");
                scanf("%d",&n);
                if(n<=0 || n> maxSize){
                    printf("n ko hop le, vui long nhap tu 1 - %d \n", maxSize);
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nhap array[%d] = ",i);
                    scanf("%d",array+i);
                }
                currentLength = n;
                printf("Ban vua nhap thanh cong cho %d phan tu \n");
                break;
            case 2:
                if(currentLength == 0)
                {
                    printf("Mang chua co phan tu nao\n");
                } else{
                    printf("Danh sach cac phan tu trong mang la : \n");
                    for (int i = 0; i < currentLength; ++i) 
                {
                    printf("array[%d] : %d \n",i,array[i]);
                }
                }
                printf("\n");
                break;
            case 3:
               int addIndex, newValue;
                printf("Moi ban nhap gia tri can them : ");
                scanf("%d",&newValue);
                printf("Moi ban nhap vi tri can them : ");
                scanf("%d",&addIndex);
                if(addIndex <0){
                    addIndex = 0;
                }else if(addIndex > currentLength)
                {
                    addIndex = currentLength;
                }
                for(int i = currentLength; i> addIndex; i--)
                {
                    array[i] = array[i-1];
                }
                array[addIndex] = newValue ;
                currentLength++;
                printf("Them thanh cong\n");
                break;
            case 4:
                int editIndex, updateValue;
                printf("Moi ban nhap vi tri can sua : ");
                scanf("%d",&editIndex);
                if(editIndex <0 ||editIndex >= currentLength )
                {
                    printf("Vi tri ko hop le \n");
                    break;
                }
                printf("Moi ban nhap gia tri moi (gia tri cu la %d) : ", array[editIndex]);
                scanf("%d",&updateValue);
                array[editIndex] = updateValue;
                printf("Cap nhat thanh cong\n");
                break;
            case 5:
                int deleteIndex;
                printf("Moi ban nhap vi tri can xoa : ");
                scanf("%d",&deleteIndex);
                if(deleteIndex <0 ||deleteIndex >= currentLength )
                {
                    printf("Vi tri ko hop le \n");
                    break;
                }
                for (int i = deleteIndex; i < currentLength -1 ; ++i) 
                {
                    array[i] = array[i+1];
                }
                currentLength--;
                break;
            case 6:
                break;
            default:
                printf("Lua chon ko hop le, vui long nhap lai : \n");
                break;
        }
        if(choice == 6){
            printf("dong MENU");
            break;
        }
    }
    return 0;
}