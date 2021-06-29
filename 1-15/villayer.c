#include <stdio.h>

float fahr_to_celsuis(float fahr)
{
    return (5.0 * fahr - 160.0)/9.0;
}

float celsuis_to_fahr(float celsuis)
{
    return (9.0 * celsuis + 160.0)/5.0;
}

int main(){
    printf("0 celsuis = %6.1f fahrenheit\n100 celsuis = %6.1f fahrenheit\n\n0 fahrenheit = %3.0f celsuis\n100 fahrenheit = %3.0f celsuis", celsuis_to_fahr(0), celsuis_to_fahr(100), fahr_to_celsuis(0), fahr_to_celsuis(100));
}