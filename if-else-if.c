#include<stdio.h>
int main()
{
    int maths,science;

    printf("enter mark of maths:");
    scanf("%d",&maths);
    printf("enter mark of science:");
    scanf("%d",&science);
     //passing mark is 33
    if(maths>33 && science>33)
    {
        printf("you win Rs.50");
    }
    else if(maths>33 || science>33)
    {
        printf("you win Rs.15");
    }
    else
    {
        printf("you loss!!!");
    }
    return 0;
}