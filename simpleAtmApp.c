/*
 * Simple Atm Application
 * by Faruk Karaman
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int select;
    int amountInvested;
    int amountWithdraw;
    int balance = 100;
    int work=1;

    while (work>0)
    {
        printf("1-Deposit Money\n");
        printf("2-Withdraw money\n");
        printf("3-Balance Amount\n");
        printf("0-Exit\n");
        printf("Please Make a Choice : ");
        scanf("%d", &select);
        switch (select)
        {
            case 0:
                work=0;
                break;
            case 1:
                printf("Please enter the amount you want to deposit: \n");
                scanf("%d", & amountInvested);
                printf("The deposit was successful!!!\n");
                balance = balance + amountInvested;
                printf("New Balance : %d\n", balance);
                break;
            case 2:
                printf("Please enter the amount you want to withdraw : \n");
                scanf("%d", & amountWithdraw);
                if (amountWithdraw > balance)
                {
                    printf("You entered an amount above the balance!!!\n");
                }
                else
                {
                    printf("The process is successful\n");
                    balance = balance - amountWithdraw;
                    printf("New Balance : %d\n", balance);
                }
                break;
            case 3:
                printf("Your balance : %d\n", balance);
                break;
            default:
                printf("Your choice is wrong!!!\n");
                break;
        }
    }
    return 0;
}
