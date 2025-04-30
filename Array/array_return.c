#include<stdio.h>
int n;   
int max(int a[])
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int min(int a[])
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
void main()
{
    printf("Enter a number:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a elements:\n");
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Max is %d\n",max(a));
    printf("Min is %d\n",min(a));
}