#include <stdio.h>
#include "stack.h"

/*This module proposes a single global and static stack*/
static Stack stack;

    /* Initialize correctly the stack */
    void stack_init (void){
        stack.size=0;

    }

    /* Returns the current size of the stack. */
    int stack_size(void){

        printf("taille actuelle du tableau: %d\n",stack.size);
        return stack.size;
    }


    /* Returns 1 if the stack is empty, returns 0 otherwise. */
    int stack_is_empty(void){

        if( stack.size == 0){
            return 1;
        }
        else{
            return 0;
        }
        
    }


    /* Returns the element at the top of the stack. */
    int stack_top(void){
        return stack.values[stack.size -1];
    }


    /* Pops the element at the top of the stack and returns it. */
    int stack_pop(void){

        if(stack_is_empty() == 0 ){
            int value = stack_top();
            stack.size--;
            printf("élément éjecté: %d\n",value);
            return value;
        }
        printf("Aucun élément dans la stack.\n");
        return 0;

    }

    /* Pushes a given integer `n` at the top of the stack. */
    void stack_push(int n){
        if (stack.size < 15){
        stack.values[stack.size]= n;
        stack.size++;
        }else{
            printf("Stack remplie !\n");
        }
    }

    /* Displays the content of the stack on the standard output. */
    void stack_display(void){

        int i;

        for (i = 0; i <= stack.size-1; i++){
            printf("%d ",stack.values[i]);

        }

        printf("\n");

    }

        /* Returns the element at index `index` inside the stack. The user is
    responsible of the use of this function. The answers may be not
    relevant if a call is done outside the current size of the
    stack. */
    int stack_get_element(int index){
        if(index <= stack.size-1 &&  index >= 0 ){
            printf("L'élement d'index %d est %d\n",index,stack.values[index]);
            return stack.values[index];
        }
        

        else{
            printf("votre index est hors des limites de la stack! \n");
            return 0;
        }
    }



