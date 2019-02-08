#include "funciones.h"

//FUNCION QUE VERIFICA SI EXITE O HAY ALGUN ERROR EN EL ARCHIVO
void errorArchivo(FILE *arch)
{
    if (arch==NULL) 
    {
        printf("El archivo no se abrio correctamente\n\n");
        exit(1);
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
        for(ptr2=ptr;*ptr2!='\0';i++,ptr2++)
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
    for(i=0,aux=cadena;*aux!='\0';aux++,i++)
    {
        aux2[i]=*aux;
        printf("\n%s",aux2);
    }
    printf("\nlambda");
}

char *invertirCadena(char *cadena)
{
    char *ptr;
    char *ptr2;
    char temp;
    ptr=cadena;

    for(ptr2=ptr;*ptr2!='\0';ptr2++);

    ptr2--;

    for(;ptr<ptr2;ptr++,ptr2--)
    {
        temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;
    }
    return cadena;
}

char *concatenarcadena(char *s_A, char *s_B)
{
    char *aux_A, *aux_B, *aux_C;

    for(aux_A = s_A;*aux_A != '\0';aux_A++);

    for(aux_B = s_B;*aux_B != '\0';aux_A++, aux_B++)
        *aux_A = *aux_B;
    *aux_A = '\0';

    return s_A;
}

void subsecuencias(char *cadena)
{
    int mascara[200], i, j, k, x, flag;
    char *aux, *aux2;
    int tam = longitudCadena(cadena);

    for(i=1;i<tam;i++)
    {
        //Iniciamos mascara con i '2'
        for(j=0,k=i;j<tam;j++, k--)
        {
            if(k>0)
                mascara[j] = 2;
            else
                mascara[j] = 0;
        }

        printf("----\n");

        for(j=0;j<tam;j++)
            printf("%d", mascara[j]);
        printf("\n");

        printf("----\n");
        
        for(j=0;j<tam;j++)
        {

            for(k=0;k<tam;k++)
            {
                if(mascara[k]==1)
                    mascara[k] = 0;
            }

            if(mascara[j]==2)
            {
                mascara[j] = 1;
                for(k=0;k<tam;k++)
                {
                    if(mascara[k] == 0)
                    {
                        mascara[k] = 2;
                        for(x=0;x<tam;x++)
                            printf("%d", mascara[x]);
                        printf("\n");

                        mascara[k] = 1;
                    }
                }
            }
        }
    }

    printf("%d\n", tam);
}

void sufijos(char *cadena)
{
    char *aux=(char *)malloc(sizeof(char));
    char *aux2=(char *)malloc(sizeof(char));
    int i, j;

    for(i=(longitudCadena(cadena)-1);i>=0;i--)
    {
        for(aux=&cadena[i];*aux!='\0';aux++)
            printf("%c", *aux);
        printf("\n");
    }

    printf("lambda");
}

void menu(char *cadena)
{
    char menu_2;
    char cadena_2[100];

    getchar();
    printf("1.- Longitud\n2.- Concatenar\n3.- Invertir\n4.- Sufijos\n5.- Prefijos\n6.- Subcadenas\n7.- Subsecuencias\n8.- Salir\n ->");
    scanf("%c", &menu_2);

    switch (menu_2)
    {
        case '1':
            printf("La longitud de \"%s\" es %d\n", cadena, longitudCadena(cadena));
            break;

        case '2':
            printf("Ingresa la palabra para concatenar: ");
            scanf("%s", cadena_2);
            printf("La cadena resultante de %s y %s es", cadena, cadena_2);
            printf(" \"%s\"\n", concatenarcadena(cadena, cadena_2));
            break;
        
        case '3':
            printf("La cadena inversa es \"%s\"\n", invertirCadena(cadena));
            break;

        case '4':
            printf("Los sufijos de \"%s\" son:\n", cadena);
            sufijos(cadena);
            break;
        
        case '5':
            printf("Los prefijos de \"%s\" son:\n", cadena);
            prefijos(cadena);
            break;

        case '6':
            printf("Las subcadenas de \"%s\" son:\n", cadena);
            subCadenas(cadena);
            break;

        case '7':
            printf("Las subsecuencias de \"%s\" son:\n", cadena);
            subsecuencias(cadena);
            break;

        case '8':
            exit(0);
            break;
    
        default:
            printf("Selecciona una opcion correcta :(\n");
            break;
    }
}