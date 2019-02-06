#include "funciones.c"

int main()
{
    char *car=(char*)malloc(sizeof(char));
    char *nombre=(char*)malloc(sizeof(char));
    char *cadenaArchivo=(char*)malloc(sizeof(char));
    int pos;
    printf("Ingrese el nombre del archivo: ");
    scanf("%s",nombre);
    FILE *archivo=buscarArchivo(nombre);
    errorArchivo(archivo);
    printf("Ingrese la posicion de la palabra: ");
    scanf("%d",&pos);
    cadenaArchivo=subCade(archivo,pos,car);
    cadenas(cadenaArchivo);
    return 0;
}
