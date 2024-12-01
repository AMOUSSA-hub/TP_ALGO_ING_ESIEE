#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>




int isNumerical(char* string){

    int checkout = 1;

    int index= 0;

    while(string[index] != '\0' ){

            if(!isdigit(string[index])){
                checkout = 0;
            }

        index++;
    }

    return  checkout;

}



int main(int argc, char* argv[]) {


    if (argc != 2) {
        printf("Erreur: veuillez fournir une chaine de caractère.\n");
        return 1;
    }


    int Numerical = isNumerical(argv[1]);
    int index= 0;


    
     index= 0;
        while(argv[1][index] != '\0' ){

            if(Numerical == 0){

                if((int)argv[1][index]>= 97){
                    printf("%d ",(((int)argv[1][index])-97));
                }

                

            }
            else{
                printf("  ");
            }
             index++;


        }
    




    return 0;
}

