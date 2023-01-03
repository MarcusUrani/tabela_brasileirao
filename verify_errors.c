#include <stdio.h>
#include <stdlib.h>
#include "verify_errors.h"

int verify_errors(int argc, FILE *fp, const char *path, const char *mode){
    if(argc != 3){
        printf("Uso: Executável não encontrado");
        exit(0);
    }
    if(fp == NULL) {
        printf("Falha em abrir o arquivo %s de modo %s", path, mode);
    }
}