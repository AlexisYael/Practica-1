#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void errorArchivo(FILE *arch);
void leerArchivo(FILE *arch,char *car);
void subCadenas(char *cadena);
void prefijos(char *cadena);
void subsecuencias(char *cadena);
void sufijos(char *cadena);
char *cadenaArchivo(FILE *archivo,int pos, char *car);
char *invertirCadena(char *p);
int longitudCadena(char *cad);
void menu(char *cadena);
char *concatenarcadena(char *s_A, char *s_B);

FILE *buscarArchivo(char *nombre);

