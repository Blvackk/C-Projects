#include <stdio.h>
#include <conio.h>

void main()
{
    int pin, pin1 = 5555, c = 1, ch, amt, balance = 5000;
    printf("Welcome to ATM\n");
start:
    printf("Enter the pin number");
    scanf("%d", &pin);

    if (pin == pin1)
    {

        printf("Please select Your Choice\n");
        printf("1.deposit \n 2.Withdraw \n 3.Checkbalance \n 4. Change Pin \n");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            printf("Enter the deposite Amount\n");
            scanf("%d", &amt);
            if (amt <= 20000)
            {
                balance=balance +amt;
                printf("The Total Deposited amount is %d\n",balance);
            }
            else
            {
                printf("max limit of Withdraw is 20k\n");
            }
            break;
        

        case 2:
            printf("Enter the withdraw Amount\n");
            scanf("%d", &amt);
            if (amt <= 20000)
            {
                if (amt <= balance)
                {
                    balance=balance-amt ;
                    printf("After deducting %d, current balance=%d\n", amt, balance);
                }
                else
                {
                    printf("Insufficient Balance\n");
                }
            }
            else
            {
                printf("max limit for withdrawl is 20k\n");
            }
            break;

        case 3:
            printf("your balance =%d", balance);
            break;

        case 4:
            printf("Enter the new Pin\n");
            scanf("%d", &pin1);
            printf("Your pin has been Updated Successfully ...!\n login again");
            goto start;
            break;
        }
    }
    else
    {
        printf("\nPlease enter the valid pin\n");
        if (c < 3)
        {
            c++;
            goto start;
        }
    }
    printf("press 1 to continue..\n");
    scanf("%d", &ch);
    if (ch == 1)
        goto start;
    printf("Thanks for using ATM");
}

