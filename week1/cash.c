#include <stdio.h>
#include <stdlib.h>

int get_cents(void)
{
    int cents;
    printf("Change owed: ");
    scanf("%d", &cents);

    return cents;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents;
}

int main(void)
{
    int cents = get_cents();
    int quarters = calculate_quarters(cents);
    // int dimes = calculate_dimes(cents);
    // int nickels = calculate_nickels(cents);
    // int pennies = calculate_pennies(cents);
    int dimes = calculate_dimes(cents - (quarters * 25));
    int nickels = calculate_nickels(cents - (quarters * 25 + dimes * 10));
    int pennies = calculate_pennies(cents - (quarters * 25 + dimes * 10 + nickels * 5));

    printf("%d cents breaks down to:\n", cents);
    printf("quarters: %d\n", quarters);
    printf("dimes: %d\n", dimes);
    printf("nickels: %d\n", nickels);
    printf("pennies: %d\n", pennies);
    printf("total coins: %d\n", quarters + dimes + nickels + pennies);

    exit(0);
}
