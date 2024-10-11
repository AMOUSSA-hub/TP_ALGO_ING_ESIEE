#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* argv[]) {

    if (argc != 3) {
        printf("Erreur : veuillez fournir deux nombres en arguments.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf(" %d + %d = %d\n", a,b,a + b);

    return 0;
}
