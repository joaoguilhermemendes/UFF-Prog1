#include <stdio.h>
int main()
{
  int segundos, hora, minutos; //segundos, horas, minutos
  int resto;
  
  scanf("%d" ,&segundos);
  
  hora = segundos/ 3600;
  
  resto = segundos % 3600;
  
  minutos = resto / 60;
  
  segundos = resto % 60;

  printf("[%d] horas ,[%d] minutos e [%d] segundos" ,hora ,minutos ,segundos);
   
  return 0;
}
