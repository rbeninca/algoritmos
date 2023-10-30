#include <stdio.h>
/* Escrever um programa que receba como entrada uma String no formato
 dd mm e calcule quantos dias faltam para o natal. Caso seja mês verifique
 se é vespera ou se é natal.
 Considere que o ano é bissexto e temos fev com 29 dias;
*/
int main()
{
    //             mes 1, 2, 3, 4, 5 , 6, 7, 8 ,9 ,10,11,12
    int dias_mes[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes, dia;
     int dias_faltantes=0;
    scanf("%d %d", &dia, &mes);

    if (mes == 12)
    {
        if ( dia == 25)
        { printf("É natal!\n");}
        if (dia == 24)
        { printf("É vespera de natal\n");}
        if ( dia < 24)
        {printf("faltam %d dias para o natal \n", 25 - dia);}
        if (dia>25)
        {printf("O natal passou a %d dias", dia-25);}
    }else{
        //contar quanto dias faltam 
        for (int m=mes; m<=12;m++ ){
            if ( m==mes){
                dias_faltantes=dias_mes[mes-1]-dia;
            }  else if (m==12){
                dias_faltantes+=25;
            }else
                dias_faltantes+=dias_mes[mes-1];
            }
        }
        printf("Faltam para o natal %d", dias_faltantes);
    }

