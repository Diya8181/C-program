#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i=0; i<=5; i++)
    {
        if(i==3)
        exit(0);
        printf("%d ",i);
    }
    printf("thank you");
    return 0;
}