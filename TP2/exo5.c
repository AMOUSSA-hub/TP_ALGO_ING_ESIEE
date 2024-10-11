#include <stdio.h>

int main(int argc, char* argv[]) {

    FILE *foo = fopen("./exo5.c", "r");
    if (foo == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    int c;

    while ((c = fgetc(foo)) != EOF) {
        putchar(c);  
    }

   
    fclose(foo);

    return 0;
}
