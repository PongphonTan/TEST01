#include <stdio.h>
#include <iostream>
#include <cstdio>

int main()
{
    int month, amount_paid;
    float remaining, interest_rate, interest, capital_reduction, capital;
    month = 0;
    amount_paid = 25000;
    capital = 2500000;
    interest_rate = 5.25 / 100 / 12; //5.25% per year => 5.25%/12 per month
    //interest = 0
    //capital_reduction = 0;
    printf("%2s %-10s %-7s %-9s %-5s %-8s\n", "mt", "capital", "int", "cap_red", "amt", "remaining");
    while (capital > 0)
    {
    month += 1;
    interest = capital * interest_rate;
    capital_reduction = amount_paid - interest;
    remaining = capital - capital_reduction;
    printf("%2d %10.2f %6.2f %7.2f %d %8.2f\n", month, capital, interest, capital_reduction, amount_paid, remaining);
    capital = remaining;
    }
    //printf("%f\n", remaining + interest);
    std::getchar();
    system("pause");
    return 0;
}
