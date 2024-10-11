#include <stdio.h>

int main(int argc, char* argv[]) {

int a = 10;
int goup =0; 

do {
    printf("%d ",a);

    if(goup ==0){
        a--;
    }
    else{
        a++;
    }

    if(a ==1){
        goup= 1;
        printf("%d ",a);
    }
    
}while(a <= 10 );

printf("\n");
return 0;

}


