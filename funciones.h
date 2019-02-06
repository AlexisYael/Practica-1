#include <stdio.h>
#include <stdlib.h>

void errorArchivo(FILE *arch);
void leerArchivo(FILE *arch,char *car);
void subCadenas(FILE *archivo,char *car);
void cadenas(char *cadena);
char vaciarCadena();
FILE *buscarArchivo(char *nombre);
char *subCade(FILE *archivo,int pos, char *car);
