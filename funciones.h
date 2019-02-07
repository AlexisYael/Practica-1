#include <stdio.h>
#include <stdlib.h>

void errorArchivo(FILE *arch);
void leerArchivo(FILE *arch,char *car);
void subCadenas(char *cadena);
void prefijos(char *cadena);
char *cadenaArchivo(FILE *archivo,int pos, char *car);
char *invertirCadena(char *p);
int longitudCadena(char *cad);
FILE *buscarArchivo(char *nombre);

