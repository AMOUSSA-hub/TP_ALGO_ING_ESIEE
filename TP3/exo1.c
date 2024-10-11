#include <stdio.h>


int main(int argc, char* argv[]){

    int resultat = atoi(argv[1]);
    int i;
    for (i = 1; i<atoi(argv[2]); i++){
        resultat = resultat * atoi(argv[1]);
    }
printf("%d\n",resultat);

return 0;

}