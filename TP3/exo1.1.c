#include <stdio.h>


int main(int argc, char* argv[]){
   
printf("%d\n",powerOf(atoi(argv[1]),atoi(argv[2])));
return 0;

}


int powerOf(int entier, int puissance){

    if(puissance-1 > 0 ){
        return entier * powerOf(entier,puissance-1);
    }
    else{
        return entier;
    }

}