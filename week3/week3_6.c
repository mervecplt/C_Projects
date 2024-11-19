#include <stdio.h>

//tax calculation fucntion declaration
float calculate_tax(float);

int main()
{
    float income, tax;
    printf("yearly income? ");
    scanf("%f", &income);
    tax = calculate_tax(income);
    printf("your yearly income is %f and your related tax is %f", income, tax);
    return 0;
}

// implementation
float calculate_tax(float income)
{
	// bunu 0'a mutlaka eşitleyelim çünkü adamın
	// income 0'dan azsa tax 0 olsun. aşağıda bunun
	// kontrolü yok.
float tax = 0.0;
    if(income > 0 && income < 15000.0)
    {
        tax = income * .15;
    }
    else if(income < 30000.0)
    {
        tax = (income - 15000) * .18 + 2250;
    }
    else if(income < 50000.0)
    {
        tax = (income - 30000) * .2 + 5400;
    }
    else if (income < 80000.0)
    {
        tax = (income - 50000) * 2.7 + 11000;
    }
    else if (income >= 80000.0)
    {
        tax = (income - 80000.0) * .33 + 21600;
    }
return tax;
}