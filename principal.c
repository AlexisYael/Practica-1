#include "funciones.c"

int main()
{
    char *car=(char*)malloc(sizeof(char));
    char *nombre=(char*)malloc(sizeof(char));
    char *cadena_archivo=(char*)malloc(sizeof(char));
    int pos;
    printf("Ingrese el nombre del archivo: ");
    scanf("%s",nombre);
    FILE *archivo=buscarArchivo(nombre);
    errorArchivo(archivo);
    printf("Ingrese la posicion de la palabra: ");
    scanf("%d",&pos);
    cadena_archivo=cadenaArchivo(archivo,pos,car);
    subCadenas(cadena_archivo);
    prefijos(cadena_archivo);
    printf("\n%s",invertirCadena(cadena_archivo));
    printf("\n%s",cadena_archivo);
    printf("\nLa longtud de la cadena es: %d\n",longitudCadena(cadena_archivo));
    return 0;
}
