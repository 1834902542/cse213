#include<stdio.h>
int main()
{
    int arr[10] = {8,7,2,1};
    int size=4,i=0,sum = 0,count=0;
    float avg;
    for(i;i<size;i++)
    {
        sum +=arr[i];
        count++;
    }

    avg=(float)sum/count;
    printf(" Avarage all array element : %.2f\n",avg);
    return 0;
}
