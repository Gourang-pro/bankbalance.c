#include<stdio.h>
#include<conio.h>

int main()
{
        int amount;

        printf("enter the amount :-->");
        scanf("%d",&amount);

        if (amount<500)
        {
            printf("YOUR BALANCE IS LOW");
        }
        else
        {
            printf("YOU HAVE MORE BALANCE");
        }
        
return 0;

}