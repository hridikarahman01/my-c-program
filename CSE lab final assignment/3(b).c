#include<stdio.h>
int main()
{
    int size = 0;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    int array[size];
    for(int i = 0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    int value,count;
    printf("Enter the value to delete : ");
    scanf("%d",&value);
    for(int i = 0; i<size; i++)
    {
        if(array[i] == value)
        {
            count++;
        }
    }
    for(int k = 0; k<count; k++)
    {
        for(int i = 0; i<size; i++)
        {
            if(array[i] == value)
            {
                for(int j = i; j<(size-1); j++)
                {
                    array[j] = array[j+1];
                }

                size--;
            }
        }
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
}
