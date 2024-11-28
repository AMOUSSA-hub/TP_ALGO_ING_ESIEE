#include <stdio.h>
#include <stdlib.h> 





int puissance(int valeur,int a, int p ){

    if (p == 0){
        return 1;
    }

    if(p == 1 ){

        return valeur; 
    }

    else{
        return puissance(valeur*a,a,p-1);
    }
}

int main(int argc, char* argv[]) {

    if (argc != 3) {
        printf("Erreur : veuillez fournir deux nombres en arguments.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);


    printf("%d**%d =%d \n",a,b,puissance(a,a,b));


    return 0;
}
