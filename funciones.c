#include "funciones.h"

void errorArchivo(FILE *arch)
{
    if (arch==NULL) 
    {
        printf("El archivo no se abrio correctamente\n\n");
        exit(0);
    }
    else
        printf("El archivo se abrio con exito.\n\n");
}
void leerArchivo(FILE *arch,char *car)
{
    while(feof(arch)==0)
    {
        fgets(car,100,arch);
        printf("%s",car);
    }  
}
void subCadenas(FILE *archivo,char *car)
{
    while(feof(archivo)==0)
    {
        fgets(car,100,archivo);
        cadenas(car);
    }
}
void cadenas(char *cadena)
{
    char *ptr=(char *)malloc(sizeof(char));
    char *ptr2=(char *)malloc(sizeof(char));
    char *aux=(char *)malloc(sizeof(char));
    int i;
    printf("Subcadenas de: %s ",cadena);
    for(ptr=cadena;*ptr!='\0';ptr++)
    {
        i=0;
        aux=(char *)malloc(sizeof(char));
        for(ptr2=ptr;*ptr2!='\0';i++,ptr2++)
        {
            aux[i]=*ptr2;
            printf("%s\n",aux);
        }
    }   
}
