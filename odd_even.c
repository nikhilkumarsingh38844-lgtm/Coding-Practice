#include<stdio.h>
main()
{
    int num[10],i;
    int even=0,odd=0;  
    printf("enter 10 number:");
    for(i=0;i<10;i++)
        {
            scanf("%d",&num[i]);
                if(num[i]%2==0)
                    even=even+1;
                else
                    odd=odd+1;
        }
    printf("no of even:%d",even);
    printf("\nno of odd:%d",odd);
    return 0;
}