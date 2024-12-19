#include <stdio.h>
#include "stack.h"




int  main(){

    
    stack_init();
    stack_push(25);




   
    stack_push(23);
    stack_push(23);
    stack_push(23);
    stack_push(23);
    stack_push(23);
    stack_push(18);
    stack_push(23);
    stack_push(25);
    stack_push(23);
    stack_push(23);
    stack_push(23);
    stack_push(23);
    stack_push(23);
    stack_push(18);
    

    int i;
    for (i = 0; i<= 14; i++ ){
        stack_pop();
        stack_display();
    }
    
    

    if( stack_is_empty() == 1 ){
        printf("Le tableau est vide.\n");
    }
    else{
        printf("Le tableau contient des éléments.\n");
    }

    stack_size();
    stack_display();
    stack_get_element(0);
    stack_get_element(14);
    stack_get_element(7);

    return 0;
} 