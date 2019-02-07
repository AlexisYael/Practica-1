#include "funciones.h"

//FUNCION QUE VERIFICA SI EXITE O HAY ALGUN ERROR EN EL ARCHIVO
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
//MUESTRA LA LONGITUD DE LA CADENA
int longitudCadena(char *cad)
{
    char *aux=cad;
    int i=0;
    while(*aux!='\0')
    {
        if (*aux=='\n')
            break;
        i++;
        aux++;
    }
    return i;
}
//FUNCION QUE ABRE EL ARCHIVO
FILE *buscarArchivo(char *nombre)
{
    FILE *arch=fopen(nombre,"r");
    return arch;
}
//FUNCION QUE LEE TODO EL ARCHIVO Y MUESTRA TODAS LAS CADENAS
void leerArchivo(FILE *arch,char *car)
{
    while(feof(arch)==0)
    {
        fgets(car,100,arch);
        printf("%s",car);
    }  
}
//FUNCION QUE RETORNA LA CADENA EN LA POSICION QUE SE DESEE
char *cadenaArchivo(FILE *archivo,int pos, char *car)
{
    int i=0;
    while(feof(archivo)==0)
    {
        fgets(car,100,archivo);
        if(i==pos)
        {
            return car;
        }
        i++;
    }  
}
//FUNCION QUE MUESTRA TODAS LAS SUBCADENAS
void subCadenas(char *cadena)
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
        for(ptr2=ptr;*ptr2!='\n';i++,ptr2++)
        {
            aux[i]=*ptr2;
            printf("\n%s",aux);
        }
    }
    printf("\nlambda"); 
}
//FUNCION QUE MUESTRA TODOS LOS PREFIJOS DE LA CADENA
void prefijos(char *cadena)
{
    char *aux=(char *)malloc(sizeof(char));
    char *aux2=(char *)malloc(sizeof(char));
    int i;
    for(i=0,aux=cadena;*aux!='\n';aux++,i++)
    {
        aux2[i]=*aux;
        printf("\n%s",aux2);
    }
    printf("\nlambda");
}
char *invertirCadena(char *cadena)
{
    char *ptr=(char *)malloc(sizeof(char));
    char *ptr2=(char *)malloc(sizeof(char));
    char temp;
    ptr=cadena;
    for(ptr2=cadena;*ptr2!='\0';ptr2++);
    for(ptr2=ptr2-2;ptr<ptr2;ptr++,ptr2--)
    {
        temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;
    }
    return ptr;
}