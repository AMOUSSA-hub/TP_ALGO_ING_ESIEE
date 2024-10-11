#include <stdio.h>

/*aficher la valeur d'une variable*/
void print_var(int n) {
    printf("Value of the variable: %d\n", n);
}
/* afficher l'adresse et la valeur d'un pointeur*/
void print_pointer(int *p) {
    printf("Pointer address: %p and Pointed value: %d\n", p, *p);
}
/* modifier la valeur d'un pointeur*/
void set_pointer(int *p, int n) {
    *p = n;
}

int main(int argc, char *argv[]) {
    int a;
    int *p = &a;
    print_var(a); 
    a = 53;        
    print_var(a); 
    print_pointer(p);
    set_pointer(&a, 42);
    print_pointer(p);
    print_var(a);  

    return 0;
}
