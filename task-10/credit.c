#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long num = get_long("number: "); //gets credit card number from user
    long n = num;
    long n1 = num;

    long x = 0;
    int count = 0, a = 0, b = 0, c = 0;
    int s = 0, k = 0, j = 0, d = 0;

    while (n != 0) //gets number of digits and luhn's algorithm
    {
        x = n % 10; //gets each individual digit of the credit card number
        n = n / 10;
        count++; //counts the number of digits in the credit number

        if (count % 2 == 0)
        {
            if ((x * 2) > 9)
            {
                j = x * 2;
                for (int i = 0; i < 2; i++)
                {

                    k = j % 10;
                    j = j / 10;
                    c = c + k;
                }

            }
            else
            {
                a = a + (x * 2);
            }

        }
        else
        {
            b = b + x;
        }
    }
    s = a + c + b; // s stores the result of luhn's algorithm

    int z = 0;
    int dual = 0;

    //finds the significant digits of the card number for checking
    if (count == 16)
    {
        while (n1 != 0)
        {
            n1 = n1 / 10;
            z++;
            if (z == 14)
            {
                dual = n1; //stores first two digits
            }
        }
    }
    else if (count == 15)
    {
        while (n1 != 0)
        {
            n1 = n1 / 10;
            z++;
            if (z == 13)
            {
                dual = n1; //stores first two digits
            }
        }
    }
    else if (count == 13)
    {
        while (n1 != 0)
        {
            n1 = n1 / 10;
            z++;
            if (z == 12)
            {
                dual = n1; //stores the first digit
            }
        }
    }
    else
    {
        printf("INVALID\n");

    }

    if (count == 16 || count == 15 || count == 13) //final check for the type of credit card
    {
        if (s % 10 == 0)
        {
            if (count == 15)
            {
                if (dual == 34 || dual == 37) //checks for AMEX
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }

            if (count == 16) //checks for mastercard and visa
            {
                if (dual == 51 || dual == 52 || dual == 53 || dual == 54 || dual == 55)
                {
                    printf("MASTERCARD\n");
                }
                else if (dual / 10 == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            if (count == 13) //checks for visa
            {
                if (dual == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
}
