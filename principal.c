#include "funciones.c"

int main()
{
    FILE *archivo=fopen("archivo.txt","r");
    char *car=(char*)malloc(sizeof(char));
    errorArchivo(archivo);
    subCadenas(archivo,car);
    return 0;
}
