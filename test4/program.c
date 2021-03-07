#include <stdio.h>


double Dodaj(double Skl1, double Skl2);   /* Należało wpisać argumenty funkcji Dodaj z pliku modul.c */


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
