#include<stdio.h>
int main()
{
    int array[100];
    int *arr=array;
    int i,x,pos,n = 10;
    printf("Please Enter the Element of this array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",& *(arr+i));
    }
    for (i = 0; i < n; i++)
    {
        printf("%d, ",*(arr+i));
    }
    printf("\nposition : ");
    scanf("%d",&pos);
    printf("insert value: ");
    scanf("%d",&x);
    for (i = n; i >= pos; i--)
    {
        *(arr+i) = *(arr+i-1);
    }

    *(arr+pos-1)=x;

    for (i = 0; i < n; i++)
    {
        printf("%d, ",*(arr+i));
    }
    return 0;
}
