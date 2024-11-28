#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* argv[]) {

    if (argc != 3) {
        printf("Erreur : veuillez fournir deux nombres en arguments.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);


    int resultat = 1;
    for (int i = 1; i<= b; i++){

        resultat = resultat * a;

    }


    printf("%d**%d =%d \n",a,b,resultat);


    return 0;
}
