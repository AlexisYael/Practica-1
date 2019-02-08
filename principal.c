#include "funciones.c"

int main(int argc, char const *argv[])
{
    char *car=(char*)malloc(sizeof(char));
    char *nombre=(char*)malloc(sizeof(char));
    char *cadena_archivo = (char*)malloc(sizeof(char)*200);
    int pos;
    
    if(argc != 2)
    {
        printf("El programa debe ejecutarce \"./principal <nombre.txt>\"");
        exit(1);
    }

    strcpy(nombre, argv[1]);
    FILE *archivo = buscarArchivo(nombre);
    errorArchivo(archivo);

    char menu_1;

    subsecuencias("computadora");

    /*printf("Menu\n 1.- Seleccionar palabra\n 2.- Introducir palabra\n 3.- Salir\n -> ");
    scanf("%s", &menu_1);

    switch (menu_1)
    {
        case '1':
            printf("Ingrese la posicion de la palabra\n -> ");
            scanf("%d", &pos);
            cadena_archivo = cadenaArchivo(archivo, pos-1, car);
            char *aux = cadena_archivo;
            for(;*aux != '\n';aux++);
            *aux = '\0';
            printf("La palabra seleccionada es \"%s\"\n", cadena_archivo);
            menu(cadena_archivo);
            break;

        case '2':
            printf("Ingrese la palabra\n -> ");
            scanf("%s", cadena_archivo);
            menu(cadena_archivo);
            break;

        case '3':
            exit(0);
            break;
    
        default:
            printf("Selecciona una opcion correcta :(\n");
            break;
    }*/

    return 0;
}
