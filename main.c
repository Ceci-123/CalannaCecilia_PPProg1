#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        int id;
        char nombre[20];
        int infectados;
        int recuperados;
        int muertos;
        int isEmpty;

 }ePais;


void actualizarRecuperados(char pais, int recuperados, ePais pais1, int tamanio);

void invertirCadena( char cadenaOrigen[]);

void ordenarCaracteres( char cadena[] );

int main()
{
    char nombre1[10] = "Maria";
    char nombre2[10] = "LuisanaMa";



    invertirCadena( nombre2);
    printf("%s %s\n", nombre1, nombre2);
    printf("Hello world!\n");

    ordenarCaracteres(nombre1);
    printf("%s %s\n", nombre1, nombre2);
    return 0;
}


void actualizarRecuperados(char pais, int recuperados, ePais pais1, int tamanio)
{
    int acumuladorRecuperados = 0;

   for(int i= 0; i < tamanio; i++)
    if(strcmp(pais[i].nombre,pais))
   {
      acumuladorRecuperados = recuperados + acumuladorRecuperados;
   }



}

void invertirCadena( char cadenaOrigen[])
{
    int longitud = strlen(cadenaOrigen);
    int i;
    char temporal[20];

    for (i = 0; i < strlen(cadenaOrigen) / 2; i++)
    {
        temporal[i] = cadenaOrigen[i];
        cadenaOrigen[i] = cadenaOrigen[longitud - i - 1];
        cadenaOrigen[longitud - i - 1] = temporal[i];
    }
    for (i = 0; i < strlen(cadenaOrigen); i++)
    {
        temporal[i] = cadenaOrigen[i];

    }
}

void ordenarCaracteres( char cadena[] )
{
    int longitud = strlen(cadena);
    char temporal;
    for(int i = 0; i < longitud -1 ; i++)
    {
        for(int j= i+1; j < longitud; j ++ )
        {
            if(cadena[i] > cadena[j])
            {
                //swap
                temporal = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = temporal;
            }
        }

    }




}
