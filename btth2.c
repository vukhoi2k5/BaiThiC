#include "stdio.h"
void dao_so(int x[],int size)
{

    printf("result:");
    for(int i= size -1  ;i>=0;i--) {

        printf("%d", x[i]);
        printf(", ");
    }

    printf("\n");


}

int main()
{
    printf("Input 10 numbers :\n");
    printf("==================\n");
    int so[10];
    for(int i =0 ;i<=9;i++)
    {
        printf("Number %d : ",i+1);
        scanf_s("%d",&so[i]);

    }
    dao_so(so, 10);
    return 0;



}