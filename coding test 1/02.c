#include<stdio.h>
void iofunction(int *a,int len);
int main()
{
    int *p;
    int arr[100];
    int size = 0;
    p = &arr[0];
    iofunction(p,size);
    return 0;
}
void iofunction(int *a,int len)
{
    printf("Please Enter the Element of this array: \n");
    int i=0;
    for(i=0; scanf("%d",(a+i))!=EOF; i++)
    {
        len++;
    }
    for(i=0; i<len; i++)
    {
        if(len<100-1)
        {
            printf("%d ",*(a+i));
        }
        else
        {
            printf("Overflow\n");
            break;
        }

    }
}
