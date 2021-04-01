
#include <time.h>
#include <stdio.h>

int main() {
    int nacimiento;
    int actual;
    int edad;
    int anio;
    printf("Introduzca su año de nacimiento: ");
    scanf("%d", &nacimiento);

time_t t;
  struct tm *tm;
  char fechayhora[100];
  t=time(NULL);
  tm=localtime(&t);
  strftime(fechayhora, 100, "%d/%m/%Y", tm);
  printf ("Si hoy es: %s\n", fechayhora);


    printf("Ingrese el año actual: ");
    scanf("%d", &actual, &anio);
    if ( anio %4==0 && anio%100!=0 || anio%400==0 )
        printf("\nES BISIESTO..." );
    else
        printf("\nNO ES BISIESTO..." );

    edad = actual - nacimiento;
    printf("\ny tienes %d años \n", edad);

    return 0;
}




