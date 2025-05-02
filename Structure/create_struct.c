#include<stdio.h>
struct create_struct
{
    /* data */
    int id;
    float f;
};

void main()
{
    struct create_struct c;
    struct create_struct s1;
    c.id=10;
    c.f=10.0;
    s1.id=20;
    s1.f=20.00;
    printf("\nThe id is %d %d",c.id,s1.id);
    printf("\nThe float is %f %f",c.f,s1.f);
    
}