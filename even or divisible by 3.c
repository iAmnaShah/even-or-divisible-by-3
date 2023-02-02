#include<stdio.h>
int main()
{
    int i,n;
    for(i=1; i<=10; i++)
    {
        printf("Enter number:");
        scanf("%d",&n);
        if(n%2==0)
        printf("%d is even\n",n);
        if(n%3==0)
        printf("%d is divisible by 3\n",n);

    }
    return 0;
}
