#include <stdio.h>

void crearArchivo()
{
    FILE *archivo;
    archivo = fopen("output.txt", "w");
    fprintf(archivo, "Hello world!");
    fclose(archivo);
}

int main() {
    crearArchivo();
    return 0;
}
