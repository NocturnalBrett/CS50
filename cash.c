#include <cs50.h>
#include <stdio.h>
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int test = 0;
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    // printf("QCents: %i\n", cents);
    cents = cents - (quarters * 25);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Total coins owed: %i\n", coins);
    printf("\n \n");
    printf("Quarters: %i\nDimes: %i\nNickels: %i\nPennies: %i\n", quarters, dimes, nickels, pennies);
}

int get_cents(void)
{
    int total;
    do{
    total = get_int("How many cents is the customer owed?: ");
    }while(total < 1);

    return total;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while(cents > 24){
        cents = cents - 25;
        quarters++;
        //printf("Quarters: %i\n Cents: %i\n",quarters, cents);

    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while(cents > 9){
        cents = cents - 10;
        dimes++;

    }
    return dimes;
    //printf("Dimes: %i\n",dimes);
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while(cents > 4){
        cents = cents - 5;
        nickels++;

    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while(cents > 0){
        cents = cents - 1;
        pennies++;

    }
    return pennies;
}
