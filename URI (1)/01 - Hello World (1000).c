#include <stdio .h>

int main ()
{
float valor = 4 * 5;
float x = 3.0;
float y = 2.0; 
valor = pow (x , y) - x ;
valor = valor * x ;
valor = valor - sqrt ( valor ) ;
printf (" Valor : %f", valor ) ;
return 0;
