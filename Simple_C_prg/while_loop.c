#include<stdio.h>

void main()
{
    int num,count=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {   
            count++;
            printf(" %d\n",i);
            

        }
    }
        
        if(count>2)
        {
            printf("The %d is not prime\n",num);

        }
        else{
            printf("The %d is prime\n",num);
        }
        
    

}