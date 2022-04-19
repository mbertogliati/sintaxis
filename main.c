#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

    char caracter;
    char flag = 1;
    printf("Escriba los caracteres: \n>> ");
    while((caracter = getchar())!='\n'){ //Nuestra entrada de caracteres termina con enter '\n';
        
        if(flag==1){ //Esta flag me permite escribir "Output: " antes de que se impriman los caracteres procesados
            printf("Output: ");
            flag = 0;
        }

        if(isalpha(caracter)){
            if (isupper(caracter)) caracter = tolower(caracter);
            else caracter = toupper(caracter);
        }

        if(!isdigit(caracter)) putchar(caracter);

    }

    return EXIT_SUCCESS;
}