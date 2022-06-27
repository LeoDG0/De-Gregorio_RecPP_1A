#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int ordenarAscendente();

int ordenarCaracteres(char cadena[]);

int main()
{
    char cadena = "UTN-FRA";

    ordenarCaracteres(cadena);


    return 0;
}

int ordenarCaracteres(char cadena[]){

    int tam = strlen(cadena);
    char auxCadena;



        for(int i = 0; i < tam / 2; i++){
            for(int j = i + 1; j < tam; j++){

                auxCadena = cadena[i];
                cadena[i] = cadena[tam - i - 1];
                cadena[tam - i - 1] = auxCadena;
            }

        }


    return auxCadena;

}

int ordenarAscendente(){

 char nombre[];
 char aux[20];

    for(int i = 0; i < 5; i++){

        printf("Ingresa un nombre: ");
		scanf("%s",&nombre);
    }

    for(int i = 1; i < 6; i++){
        for(int j = 0; j < 5; j++){
            strcpy(aux, nombre[j]);
            strcpy(nombre[j], nombre[i]);
            strcpy(nombre[i]);
        }
    }

    return nombre;

}

